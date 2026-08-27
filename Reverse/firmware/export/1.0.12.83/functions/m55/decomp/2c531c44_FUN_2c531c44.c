/* FUN_2c531c44 @ 0x2c531c44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_2c531c44(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c531d70;
  FUN_2c48e424(param_2,_LAB_2c531d74,param_3,0);
  iVar2 = FUN_2c48e424(param_2,_LAB_2c531d78);
  if (iVar2 == 0) {
    iStack_40 = (uint)iStack_40._1_3_ << 8;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x10);
    uStack_54 = 0;
    iStack_40 = (uint)iStack_40._1_3_ << 8;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    if (iVar2 != 0) {
      cVar1 = FUN_2c66c4ec(iVar2);
      FUN_2c531698(&uStack_70,iVar2,cVar1 + '\x01');
      uStack_54 = uStack_70;
      uStack_50 = uStack_6c;
      uStack_4c = uStack_68;
      uStack_48 = uStack_64;
      uStack_44 = uStack_60;
      iStack_40 = CONCAT31(iStack_40._1_3_,uStack_5c);
    }
  }
  switch(param_3) {
  case 0:
  case 3:
    FUN_2c48e424(param_2,_LAB_2c531d74);
    iVar2 = FUN_2c48e424(param_2,_LAB_2c531d7c);
    func_0x2c531564(&uStack_3c,(int)&uStack_54 + 1,*(undefined4 *)(iVar2 + 0x10));
    uVar3 = 2;
    break;
  case 1:
    *param_1 = 1;
    *(undefined4 *)(param_1 + 4) = uStack_54;
    *(undefined4 *)(param_1 + 8) = uStack_50;
    *(undefined4 *)(param_1 + 0xc) = uStack_4c;
    *(undefined4 *)(param_1 + 0x10) = uStack_48;
    *(undefined4 *)(param_1 + 0x14) = uStack_44;
    param_1[0x18] = (char)iStack_40;
    goto LAB_2c531cf4;
  case 2:
    FUN_2c48e424(param_2,_LAB_2c531d74);
    iVar2 = FUN_2c48e424(param_2,_LAB_2c531d7c);
    func_0x2c531564(&uStack_3c,(int)&uStack_54 + 1,*(undefined4 *)(iVar2 + 0x10));
    uVar3 = 3;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c531d88,0xbc,_LAB_2c531d80,_LAB_2c531d84,_LAB_2c531d80);
  }
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 4) = uStack_3c;
  *(undefined4 *)(param_1 + 8) = uStack_38;
  *(undefined4 *)(param_1 + 0xc) = uStack_34;
  *(undefined4 *)(param_1 + 0x10) = uStack_30;
  *(undefined4 *)(param_1 + 0x14) = uStack_2c;
  *(undefined4 *)(param_1 + 0x18) = uStack_28;
  *(undefined4 *)(param_1 + 0x1c) = uStack_24;
  *(undefined4 *)(param_1 + 0x20) = uStack_20;
LAB_2c531cf4:
  if (*_LAB_2c531d70 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

