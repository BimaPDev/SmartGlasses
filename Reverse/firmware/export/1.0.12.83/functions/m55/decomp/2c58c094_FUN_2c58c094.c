/* FUN_2c58c094 @ 0x2c58c094 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c58c094(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  uint *puStack_60;
  int iStack_5c;
  uint auStack_58 [4];
  undefined4 uStack_48;
  uint *puStack_44;
  int iStack_40;
  uint auStack_3c [4];
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined2 uStack_22;
  undefined4 uStack_20;
  int iStack_1c;
  
  uVar1 = _LAB_2c58c170;
  iStack_1c = *_LAB_2c58c16c;
  iStack_40 = 0;
  auStack_3c[0] = auStack_3c[0] & 0xffffff00;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0xb;
  uStack_20 = 0xffffffff;
  uStack_48 = _LAB_2c58c170;
  uStack_22 = 3;
  puStack_44 = auStack_3c;
  FUN_2c58c9d8(&puStack_60,param_2,0);
  uVar3 = auStack_3c[0];
  puVar2 = puStack_44;
  if (puStack_60 == auStack_58) {
    if (iStack_5c != 0) {
      if (iStack_5c == 1) {
        *(undefined1 *)puStack_44 = (undefined1)auStack_58[0];
      }
      else {
        FUN_2c674668(puStack_44,auStack_58);
      }
    }
    *(undefined1 *)((int)puStack_44 + iStack_5c) = 0;
    iStack_40 = iStack_5c;
  }
  else {
    bVar4 = puStack_44 != auStack_3c;
    puStack_44 = puStack_60;
    if (bVar4) {
      iStack_40 = iStack_5c;
      auStack_3c[0] = auStack_58[0];
      if (puVar2 != (uint *)0x0) {
        auStack_58[0] = uVar3;
        puStack_60 = puVar2;
        goto LAB_2c58c0f2;
      }
    }
    auStack_3c[0] = auStack_58[0];
    iStack_40 = iStack_5c;
    puStack_60 = auStack_58;
  }
LAB_2c58c0f2:
  iStack_5c = 0;
  *(undefined1 *)puStack_60 = 0;
  if (puStack_60 != auStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  FUN_2c58c9d8(param_1,&uStack_48);
  uStack_48 = uVar1;
  if (puStack_44 == auStack_3c) {
    if (*_LAB_2c58c16c != iStack_1c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

