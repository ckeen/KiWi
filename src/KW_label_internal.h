#ifndef KW_LABEL_INTERNAL_H
#define KW_LABEL_INTERNAL_H

#include "SDL.h"
#include "SDL_ttf.h"
#include "KW_label.h"

typedef
struct KW_Label {
  char * text;
  KW_Texture * textrender;
  KW_Color color;
  int style;
  KW_Font * font;
  KW_LabelHorizontalAlignment halign;
  KW_LabelVerticalAlignment valign;
  int hoffset;
  int voffset;
  unsigned int cursor;
  KW_bool showcursor;
  KW_bool dirty;
  
  
  unsigned textwidth;
  unsigned textheight;
  int cursorx;
  int cursory;
  KW_Rect iconclip;
  
  int x;
} KW_Label;

void PaintLabel(KW_Widget * widget);
void RenderLabelText(KW_Widget * widget);
void DestroyLabel(KW_Widget * widget);
void LabelFontChanged(KW_GUI * gui, void * data, KW_Font * font);

#endif
