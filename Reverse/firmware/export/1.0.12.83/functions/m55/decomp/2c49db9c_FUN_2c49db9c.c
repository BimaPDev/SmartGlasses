/* FUN_2c49db9c @ 0x2c49db9c */

undefined4 FUN_2c49db9c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte local_25;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_14;
  
  iVar1 = DAT_2c49db7c;
  if (*(int *)(DAT_2c49dbac + 0x48) == 1) {
    return param_1;
  }
  local_14 = *DAT_2c49db74;
  local_24 = 0;
  local_20 = *DAT_2c49db78;
  uStack_18 = DAT_2c49db78[2];
  local_1c = *(undefined4 *)(DAT_2c49db7c + 0xc);
  FUN_2c4bc9b4(*(undefined1 *)(DAT_2c49db7c + 4),&local_20);
  *(undefined4 *)(iVar1 + 0x20) = 0xffffff01;
  iVar2 = FUN_2c49d6ac();
  if (iVar2 != 0) {
    FUN_2c6444fc(0xfa);
    FUN_2c6444fc(100);
    iVar2 = FUN_2c49d6ac();
    if (iVar2 != 0) {
      FUN_2c6444fc(0xfa);
      FUN_2c6444fc(100);
      iVar2 = FUN_2c49d6ac();
      if (iVar2 != 0) {
        FUN_2c6444fc(0xfa);
        FUN_2c6444fc(100);
        iVar2 = FUN_2c49d6ac();
        if (iVar2 != 0) {
          uVar3 = 0xffffffff;
          goto LAB_2c49db0e;
        }
      }
    }
  }
  iVar2 = FUN_2c49c6a0(DAT_2c49db7c,0xab,&local_25);
  if (-1 < iVar2) {
    *(uint *)(iVar1 + 0x38) = (uint)local_25;
    iVar2 = FUN_2c49cec0();
    if (iVar2 == 0) {
      iVar2 = *DAT_2c49db80;
      *(undefined4 *)(iVar1 + 0x48) = 1;
      *(undefined4 *)(iVar1 + 0x3c) = 0x5b;
      if (iVar2 < 1) {
        FUN_2c49ce4c(DAT_2c49db7c);
        iVar2 = *(int *)(iVar1 + 0x14);
      }
      FUN_2c49b954(&local_24);
      if ((iVar2 < 0xc80) && (local_24 == 0)) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x533,DAT_2c49db90,DAT_2c49db8c,DAT_2c49db94,iVar2,0,0xc80);
      }
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x48) == 1) {
        iVar2 = *DAT_2c49db84;
        if (iVar2 < -2999) {
          iVar2 = FUN_2c4baafc();
          if (iVar2 == 2) {
            *(undefined4 *)(iVar1 + 0x24) = 0xfa;
            goto LAB_2c49db0e;
          }
          FUN_2c49c6fc();
          iVar2 = *(int *)(iVar1 + 0x24);
        }
        if (599 < iVar2) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x539,DAT_2c49db90,DAT_2c49db8c,DAT_2c49db88,iVar2,600);
        }
      }
LAB_2c49db0e:
      if (*DAT_2c49db74 != local_14) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x523,DAT_2c49db90,DAT_2c49db8c,DAT_2c49db98);
}

