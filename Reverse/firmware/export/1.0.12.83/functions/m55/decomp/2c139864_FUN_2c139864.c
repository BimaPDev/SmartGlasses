/* FUN_2c139864 @ 0x2c139864 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c139864(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint extraout_r3;
  uint uVar1;
  int iVar2;
  undefined2 uStack_220;
  short sStack_21e;
  undefined1 auStack_21c [512];
  int iStack_1c;
  
  iStack_1c = *_DAT_2c139914;
  sStack_21e = *_DAT_2c139918;
  *_DAT_2c139918 = sStack_21e + 1;
  uStack_220 = (undefined2)param_2;
  if (param_4 < 0x201) {
    FUN_2c13e7f0(auStack_21c,param_3,param_4);
    FUN_2c13826c(0,&uStack_220,param_4 + 4);
    uVar1 = (uint)(_DAT_2c13991c - _DAT_2c139920) >> 5;
    if (uVar1 != 0) {
      iVar2 = 0;
      do {
        if (*(ushort *)(_DAT_2c139920 + iVar2 * 2) == param_2) {
          FUN_2c13f3b4(*_DAT_2c139924,0xffffffff);
          if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
            (**(code **)(param_1 + 0x1c))(param_2,param_3,param_4);
          }
          if (*_DAT_2c139914 == iStack_1c) {
            return;
          }
          goto LAB_2c139910;
        }
        iVar2 = iVar2 + 0x10;
      } while (uVar1 * 0x10 - iVar2 != 0);
    }
    FUN_2c13635c(_DAT_2c13992c,_DAT_2c139928,param_2);
    param_4 = extraout_r3;
  }
  FUN_2c13635c(_DAT_2c139930,param_4,0x200);
LAB_2c139910:
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

