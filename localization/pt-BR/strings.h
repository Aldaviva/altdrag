/*
	AltDrag - pt-BR localization by Jucá Costa (virgilino@gmail.com)

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.
*/

struct strings pt_BR = {
 /* === translation info === */
 /* code               */ L"pt-BR",
 /* lang_english       */ L"Brazilian Portuguese",
 /* lang               */ L"Português (Brasil)",
 /* author             */ L"Jucá Costa",

 /* === app === */
 /* tray_enabled       */ APP_NAME,
 /* tray_disabled      */ APP_NAME " (desativado)",
 { /* menu */
   /* enable           */ L"Ativar",
   /* disable          */ L"Desativar",
   /* hide             */ L"Ocultar ícone",
   /* update           */ L"Atualização disponível!",
   /* config           */ L"Configuração",
   /* about            */ L"Sobre",
   /* exit             */ L"Fechar",
 },
 { /* update */
   /* update_balloon   */ L"Nova versão disponível!",
   /* update_dialog    */ L"Uma nova versão está disponível. Ir à página de download?",
   /* update_nonew     */ L"Não há atualizações disponíveis.",
 },

 /* === config === */
 /* title              */ L"Configuração do " APP_NAME,
 { /* tabs */
   /* general          */ L"Geral",
   /* input            */ L"Teclado e mouse",
   /* blacklist        */ L"Lista negra",
   /* advanced         */ L"Avançado",
   /* about            */ L"Sobre",
 },
 { /* general tab */
   /* box              */ L"Configurações gerais",
   /* autofocus        */ L"A&tivar janelas ao arrastar. Você também pode\npressionar Ctrl para ativar janelas.",
   /* aero             */ L"&Imitar o Aero Snap",
   /* inactivescroll   */ L"&Rolar janelas inativas",
   /* mdi              */ L"&MDI support",
   /* autosnap         */ L"Alinhar automaticamente a:",
   /* autosnap0        */ L"Desativado",
   /* autosnap1        */ L"Bordas da tela",
   /* autosnap2        */ L"+ exterior das janelas",
   /* autosnap3        */ L"+ interior das janelas",
   /* language         */ L"Idioma:",
   /* autostart_box    */ L"Início automático",
   /* autostart        */ L"&Iniciar o "APP_NAME" quando fizer logon",
   /* autostart_hide   */ L"&Ocultar ícone da área de notificação",
   /* autostart_elevate*/ L"&Elevate to administrator privileges",
   /*       elevate_tip*/ L"Note that a UAC prompt will appear every time you log in, unless you disable UAC completely.",
   /* elevate          */ L"E&levate",
   /* elevated         */ L"Elevated",
   /* elevate_tip      */ L"This will create a new instance of "APP_NAME" which is running with administrator privileges. This allows "APP_NAME" to manage other programs which are running with administrator privileges.\n\nYou will have to approve a UAC prompt from Windows to allow "APP_NAME" to run with administrator privileges.",
   /* elevation_aborted*/ L"Elevation aborted.",
   /* autosave         */ L"Nota: as configurações são salvas e aplicadas instantaneamente!",
 },
 { /* input tab */
   { /* mouse */
     /* box            */ L"Ações do mouse",
     /* lmb            */ L"Botão esquerdo:",
     /* mmb            */ L"Botão do meio:",
     /* rmb            */ L"Botão direito:",
     /* mb4            */ L"Botão 4:",
     /* mb5            */ L"Botão 5:",
     /* scroll         */ L"Scroll:",
     /* lowerwithmmb   */ L"&Lower windows by middle clicking on title bars",
   },
   { /* actions */
     /* move           */ L"Move",
     /* resize         */ L"Resize",
     /* close          */ L"Close",
     /* minimize       */ L"Minimize",
     /* lower          */ L"Lower",
     /* alwaysontop    */ L"AlwaysOnTop",
     /* center         */ L"Center",
     /* nothing        */ L"Nothing",
     /* alttab         */ L"Alt+Tab",
     /* volume         */ L"Volume",
     /* transparency   */ L"Transparency",
   },
   { /* hotkeys */
     /* box            */ L"Teclas de atalho",
     /* leftalt        */ L"Alt &esquerdo",
     /* rightalt       */ L"Alt &direito",
     /* leftwinkey     */ L"&Windows esquerdo",
     /* rightwinkey    */ L"W&indows direito",
     /* leftctrl       */ L"&Ctrl esquerdo",
     /* rightctrl      */ L"C&trl direito",
     /* more           */ L"Adicione mais teclas editando o arquivo .ini!\nUtilize a tecla Shift para alinhar as janelas umas às outras.",
   },
 },
 { /* blacklist tab */
   /* box              */ L"Configurações da lista negra",
   /* processblacklist */ L"Processos a ignorar:",
   /* blacklist        */ L"Janelas a ignorar:",
   /* snaplist         */ L"Janelas a alinhar:",
   /* explanation      */ L"Leia <a href=\"http://code.google.com/p/altdrag/wiki/Blacklist\">a wiki</a> (em inglês) na nossa página para uma explicação detalhada de como a lista negra funciona!",
   /* findwindow_box   */ L"Identificar janela",
   /* _explanation     */ L"Utilize esta ferramenta para identificar a classe de uma janela, a fim de adicionar a uma das listas acima.",
 },
 { /* advanced tab */
   /* box              */ L"Configurações avançadas",
   /* hookwindows      */ L"A&tivar alinhamento quando mover normalmente uma janela. Funciona em conjunção com o alinhamento automático.",
   /* hookwindows_warn */ L"Note que isto não é totalmente seguro, pois se conecta a outros processos e coisas do tipo. Pode ser arriscado usar com jogos que tenham proteção anti-cheat.",
   /* checkonstartup   */ L"Checar se há novas at&ualizações automaticamente",
   /* beta             */ L"Checar versões &beta",
   /* checknow         */ L"&Checar agora",
   /* ini              */ L"As configurações do "APP_NAME" são salvas no arquivo "APP_NAME".ini. Certas configurações só podem ser modificadas através da modificação manual desse arquivo.",
   /* openini          */ L"Abrir arquivo &ini",
 },
 { /* about tab */
   /* box              */ L"Sobre o "APP_NAME,
   /* version          */ L"Versão "APP_VERSION,
   /* author           */ L"Criado por Stefan Sundin",
   /* license          */ APP_NAME L" é um software grátis e de código aberto!\nDivulgue-o aos seus amigos!",
   /* donate           */ L"&Doar",
   /*translation_credit*/ L"Translation credit",
 },

 /* === misc === */
 /* unhook_error       */ L"There was an error disabling "APP_NAME". This was most likely caused by Windows having already disabled "APP_NAME"'s hooks.\n\nIf this is the first time this has happened, you can safely ignore it and continue using "APP_NAME".\n\nIf this is happening repeatedly, you can read on the website wiki how to prevent this from happening again (look for '"APP_NAME" mysteriously stops working' on the About page).",
};