from manimlib.imports import*
def s(n,t):
    if(n==1):
        return np.sin(t)
    else:
        return s(n-1,t)+np.sin(n*t)/n
class trend(Scene):
    def construct(self):
        func1 = FunctionGraph(
            lambda x: s(1,x),
            x_min=-PI*2,x_max=PI*2
        )
        func1.set_color(BLUE)
        func2 = FunctionGraph(
            lambda x: s(2,x),
            x_min=-PI*2, x_max=PI*2
        ).set_color(RED)
        chase=VGroup(func1,func2)
        chase.add(
            FunctionGraph(
                lambda x: s(3,x),
                x_min=-PI * 2, x_max=PI * 2
            ).set_color(ORANGE)
        )
        chase.add(
            FunctionGraph(
                lambda x: s(4,x),
                x_min=-PI *2, x_max=PI* 2
            ).set_color(GREEN)
        )
        chase.add(
            FunctionGraph(
                lambda x: s(5, x),
                x_min=-PI * 2, x_max=PI * 2
            ).set_color(TEAL)
        )
        grid = NumberPlane()
        grid.add_coordinates()
        self.play(Write(grid))
        self.wait(1.5)
        self.play(ShowCreation(func1));self.wait(2.1)
        for i in range(1, 5):
            self.play(Transform(chase[0],chase[i]))