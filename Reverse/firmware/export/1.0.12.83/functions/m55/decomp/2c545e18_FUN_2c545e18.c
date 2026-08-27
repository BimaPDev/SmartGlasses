/* FUN_2c545e18 @ 0x2c545e18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c545e18(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [20];
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [16];
  int iStack_24;
  
  uVar4 = _LAB_2c545f6c;
  uVar3 = *(undefined4 *)(param_1 + 4);
  iStack_24 = *_LAB_2c545f58;
  if (*(short *)(param_2 + 0x26) == 4) {
    func_0x2c548304(uVar3);
    FUN_2c54800c(*(int *)(param_1 + 4),
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x114) + 0x10));
    iVar1 = func_0x2c547648(*(undefined4 *)(param_1 + 4),param_2);
    uVar2 = (uint)(iVar1 != 0);
  }
  else if (*(short *)(param_2 + 0x26) == 0x65) {
    uStack_74 = _LAB_2c545f6c;
    auStack_68[0] = 0;
    uStack_54 = 0;
    auStack_50[0] = 0;
    uStack_38 = 0;
    auStack_34[0] = 0;
    uStack_6c = 0;
    puStack_70 = auStack_68;
    puStack_58 = auStack_50;
    puStack_3c = auStack_34;
    iVar1 = func_0x2c555e60(*(undefined4 *)(param_2 + 4),&uStack_74);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_DAT_2c545f64,0x50,_DAT_2c545f5c,_LAB_2c545f60,_DAT_2c545f5c);
    }
    iVar1 = func_0x2c547c28(uVar3);
    if ((iVar1 == 0) || (iVar1 = func_0x2c548290(uVar3,&puStack_70), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_DAT_2c545f64,0x56,_DAT_2c545f5c,_LAB_2c545f68,_DAT_2c545f5c);
    }
    FUN_2c547edc(&uStack_7c,uVar3);
    FUN_2c55e854(uStack_7c,puStack_58,1,0);
    if ((piStack_78 != (int *)0x0) &&
       (iVar1 = piStack_78[1], piStack_78[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*piStack_78 + 8))();
      iVar1 = piStack_78[2];
      piStack_78[2] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)(*piStack_78 + 0xc))();
      }
    }
    FUN_2c547aec(uVar3);
    uStack_74 = uVar4;
    if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_58 != auStack_50) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    uVar2 = 0;
    if (puStack_70 != auStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (*_LAB_2c545f58 == iStack_24) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

