from turtle import bgcolor
import pygame
import sys
from gun import Gun
def run():
    pygame.init()
    screen = pygame.display.set_mode((1200, 700))
    pygame.display.set_caption("Космонавтика")
    bg_color = (0, 0, 0)
    gun = Gun(screen)

    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                sys.exit()
        screen.fill(bg_color)
        gun.output()
        pygame.display.flip()


run()





