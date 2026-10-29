#include "Game.h"

Game::Game()
{
	InitWindow(screenWidth, screenHieght, "Plat");
	SetTargetFPS(30);

}

Game::~Game()
{
}

void Game::InitGame()
{
	ballPos = { (float)screenWidth / 2, (float)screenHieght / 2 };

}

void Game::Update()
{
	speed = 2;
	if (IsKeyDown(KEY_UP)) ballPos.y -= speed;
	if (IsKeyDown(KEY_W)) ballPos.y -= speed;

	if (IsKeyDown(KEY_LEFT)) ballPos.x -= speed;
	if (IsKeyDown(KEY_A)) ballPos.x -= speed;

	if (IsKeyDown(KEY_DOWN)) ballPos.y += speed;
	if (IsKeyDown(KEY_S)) ballPos.y += speed;

	if (IsKeyDown(KEY_RIGHT)) ballPos.x += speed;
	if (IsKeyDown(KEY_D)) ballPos.x += speed;
}

void Game::Draw()
{
	BeginDrawing();
	ClearBackground(DARKBLUE); //Es como las capas de Unity, El fondo primero y luego lo que sigue
	DrawText("Ball Moving", 10, 10, 25, BLACK);
	DrawCircleV(ballPos, 50, RED);
	EndDrawing();
}

