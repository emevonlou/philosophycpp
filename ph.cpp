#include <windows.h>
#include <stdlib.h>
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

// WinMain, a função main em janelas
int WINAPI WinMain (HINSTANCE hThisInstance,
HINSTANCE hPrevInstance,
LPSTR lpszArgument,
int nFunsterStil)
{

HWND hwnd;      // O objeto para indicar a janela
MSG messages;   // Objeto mensagem do Windows para controlar o acionamento de botões
WNDCLASSEX wincl;   // O objeto para criar a janela

wincl.hInstance = hThisInstance;
wincl.lpszClassName = “WindowsAppl”; // Nome da classe da janela
wincl.lpfnWndProc = WindowProcedure;
wincl.style = CS_DBLCLKS;
wincl.cbSize = sizeof (WNDCLASSEX);
wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);      // Janela com icone default do Windows
wincl.hCursor = LoadCursor (NULL, IDC_ARROW);          //Cursor default
wincl.lpszMenuName = NULL;
wincl.cbClsExtra = 0;
wincl.cbWndExtra = 0;
wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND;       // Cor cinza de background

if (!RegisterClassEx (&wincl))  // Se o registro da classe foi mal-sucedido return 0
return 0;

hwnd = CreateWindowEx (               // Criação da janela
0,
“WindowsAppl”,                 // Indicação da classe da janela
“Hello World”,                 // Nome da janela
WS_OVERLAPPEDWINDOW,           // Estilo da janela
350,                               // x em relação ao desktop
250,                                 // y em relação ao desktop
300,                                  // largura da janela
300,                               // altura da janela
HWND_DESKTOP,
NULL,
hThisInstance,
NULL
);

ShowWindow (hwnd, nFunsterStil);                // Mostrar a janela

while (GetMessage (&messages, NULL, 0, 0)) // Recuperar mensagens
{
TranslateMessage(&messages);
DispatchMessage(&messages);
}

return messages.wParam;
}

LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
switch (message)
{
case WM_CREATE: // Criação da janela
break;
case WM_COMMAND:   // Interpretação da janela
break;
case WM_DESTROY:   // Destruição da janela
PostQuitMessage (0);
break;
default:
return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}