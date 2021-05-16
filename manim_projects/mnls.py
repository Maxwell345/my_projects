from manimlib.imports import*
class itsction(Scene):
    def construct(self):
        pa=np.array([0,2,0])
        pb=np.array([-2,-0.5,0])
        pc=np.array([4,-1.5,0])
        outp=np.array([3,2,0])
        dot=Dot(fill_color=RED)
        line1=Line(pa,pb);line2=Line(pb,pc);line3=Line(pc,pa)
        outline=Line(outp,pb)
        grpline=VGroup(line1,line2,line3,outline,dot)
        self.play(ShowCreation(grpline))
        self.wait(1)
        point=line_intersection(line3.get_start_and_end(),outline.get_start_and_end())
        self.play(ApplyMethod(dot.move_to,point))
        self.wait(1)
class slowalong(Scene):
    def construct(self):
        axes = Axes()
        dot=Dot(fill_color=TEAL).move_to(np.array([-PI/3,-np.sqrt(3),0]))
        func1 = FunctionGraph(
            lambda x: np.tan(x),
            x_min=-PI/3, x_max=PI/3
        )
        self.play(Write(axes))
        self.wait(1)
        self.play(ShowCreation(func1))
        self.wait(2)
        self.play(ShowCreation(dot))
        self.wait(1)
        self.play(MoveAlongPath(dot,func1),run_time=3)
        self.wait(1)
class LHopital(Scene):
    def textto(self,stuff,standard,string):
        tptext=TextMobject(string)
        tptext.match_color(stuff)
        tptext.next_to(standard,DOWN,aligned_edge=LEFT,buff=0.7)
        self.play(Transform(stuff,tptext),run_time=1.5)
        self.wait(1)
    def texto(self,old,new):
        tmptex=TexMobject(new)
        tmptex.match_color(old)
        tmptex.move_to(old)
        self.play(Transform(old,tmptex),run_time=1.6)
        self.wait(0.9)
    def construct(self):
        axes = Axes()
        lnx = FunctionGraph(
            lambda x: np.log(x),
            x_min=1/3, x_max=6
        )
        log2x=FunctionGraph(
            lambda x: np.log2(x),
            x_min=1/3, x_max=6
        ).set_color(PINK)
        graph=VGroup(axes,lnx,log2x)
        px0=Dot().shift(RIGHT)
        pup=Dot(fill_color=GREEN).move_to(np.array([4,np.log(4),0]))
        pdow=Dot(fill_color=BLUE).move_to(np.array([4,np.log2(4),0]))
        prj=Dot(fill_color=ORANGE).shift(RIGHT*4)
        points=VGroup(pup,pdow,prj,px0)
        bottom=Line(px0.get_center(),prj.get_center()).set_color(GOLD_B)
        vertical1=DashedLine(prj.get_center(),pup.get_center())
        vertical2=DashedLine(pup.get_center(),pdow.get_center())
        slope1=Line(np.array([1,0,0]),pup.get_center()).set_color(GREEN)
        slope2=Line(np.array([1,0,0]),pdow.get_center()).set_color(BLUE)
        nets=VGroup(vertical1,vertical2,slope1,slope2,bottom)
        fx=TexMobject("f(x)");gx=TexMobject("g(x)")
        fx.move_to(np.array([6,3,0]));gx.move_to(np.array([6,1.4,0]))
        difference=TexMobject("x-x_{_{0}}");difference.match_color(bottom)
        difference.scale(0.57);difference.next_to(bottom,DOWN)
        xo=TextMobject("O");xo.scale(0.75);xo.next_to(px0,UP)
        tagp=TextMobject("P");tagp.scale(0.75);tagp.next_to(prj,DOWN,buff=0.35)
        taga=TextMobject("A");taga.scale(0.75);taga.next_to(pdow,UP)
        tagb=TextMobject("B");tagb.scale(0.75);tagb.next_to(pup,RIGHT,aligned_edge=UP)
        pointags=VGroup(tagp,taga,tagb,xo,difference)
        proof=TexMobject("f(x_{_{0}})=g(x_{_{0}})=0");proof.set_color("#FEDF13")
        proof.move_to(np.array([-4,3,0]))
        hint=TextMobject("当$x\\to x_{_{0}}$时");hint.set_color("#66FCCF")
        hint.next_to(proof,DOWN,aligned_edge=LEFT,buff=0.7)
        self.play(ShowCreation(graph));self.play(FadeIn(points));self.play(Write(nets))
        self.play(Write(fx));self.play(Write(gx));self.play(ShowCreation(pointags))
        self.wait(1)
        bottom.add_updater(lambda bt: bt.put_start_and_end_on(px0.get_center(),prj.get_center()))
        difference.add_updater(lambda df: df.next_to(bottom,DOWN))
        pup.add_updater(lambda d: d.move_to(np.array([prj.get_center()[0],np.log(prj.get_center()[0]),0])))
        pdow.add_updater(lambda p: p.move_to(np.array([prj.get_center()[0],np.log2(prj.get_center()[0]),0])))
        vertical1.add_updater(lambda v: v.put_start_and_end_on(prj.get_center(),pup.get_center()))
        vertical2.add_updater(lambda v: v.put_start_and_end_on(pup.get_center(),pdow.get_center()))
        slope1.add_updater(lambda l: l.put_start_and_end_on(np.array([1,0,0]),pup.get_center()))
        slope2.add_updater(lambda q: q.put_start_and_end_on(np.array([1,0,0]),pdow.get_center()))
        tagp.add_updater(lambda t: t.next_to(prj,DOWN,buff=0.35))
        taga.add_updater(lambda g: g.next_to(pdow,UP))
        tagb.add_updater(lambda x: x.next_to(pup,RIGHT,aligned_edge=UP))
        self.play(DrawBorderThenFill(proof));self.wait(1.5)
        self.texto(proof,"{f(x)\\over{g(x)}}={k_{_{OA}}\\over{k_{_{PB}}}}")
        self.play(Write(hint),run_time=1.5);self.wait(1)
        self.play(ApplyMethod(prj.shift,2.7*LEFT),run_time=6)
        self.textto(hint,proof,"OA,OB变为f(x)和g(x)的切线")
        self.texto(proof,"\\lim_{x\\to x_{0}}{f(x)\\over{g(x)}}=\\lim_{x\\to x_{0}}{f'(x)\\over{g'(x)}}")
        therest=VGroup(hint,graph,points,pointags,nets,fx,gx)
        self.play(FadeOut(therest))
        self.wait(0.8)
        self.play(ApplyMethod(proof.move_to,ORIGIN))
        self.play(WiggleOutThenIn(proof))
        self.wait(1)