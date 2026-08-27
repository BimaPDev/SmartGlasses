/* FUN_2c4f4baa @ 0x2c4f4baa */

undefined4 FUN_2c4f4baa(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  piVar3 = piRam2c4f4c20;
  iVar4 = *piRam2c4f4c20;
  if (iVar4 == 0) {
    iVar4 = FUN_2c64419c(DAT_2c4f4c1c);
    *piVar3 = iVar4;
  }
  FUN_2c644044(iVar4,0xffffffff);
  puVar2 = DAT_2c4f4c18;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *DAT_2c4f4c18 = &LAB_2c4f4bd4;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  FUN_2c6746b8(0,param_1,param_2,param_3,param_4);
  if (iVar4 == 0) {
    *DAT_2c4f4c18 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  FUN_2c644080(*piVar3);
  return 0;
}

