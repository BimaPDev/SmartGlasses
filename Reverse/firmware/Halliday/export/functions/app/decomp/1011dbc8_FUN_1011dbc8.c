/* FUN_1011dbc8 @ 0x1011dbc8 */

void FUN_1011dbc8(uint param_1)

{
  int iVar1;
  
  if (param_1 == 0xffffffff) {
    param_1 = 0xffffffff;
    iVar1 = -1;
  }
  else {
    param_1 = param_1 & ~((int)param_1 >> 0x1f);
    iVar1 = (int)param_1 >> 0x1f;
  }
  FUN_101153fc(param_1,iVar1);
  return;
}

