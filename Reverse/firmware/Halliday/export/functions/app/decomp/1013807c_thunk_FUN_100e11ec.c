/* thunk_FUN_100e11ec @ 0x1013807c */

void thunk_FUN_100e11ec(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_1011ea48(*DAT_100e1230,0,200);
  }
  else {
    iVar1 = FUN_100e0e08(param_1,param_1);
    if (iVar1 == 0) {
      FUN_100a5b78((DAT_100e1238 - DAT_100e1234) * 0x20 & 0xff00U | 0x1540021,DAT_100e123c);
      return;
    }
    *(undefined1 *)(iVar1 + 6) = 0;
  }
  FUN_100e0e44();
  return;
}

