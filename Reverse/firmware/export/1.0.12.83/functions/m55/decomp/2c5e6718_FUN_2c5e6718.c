/* FUN_2c5e6718 @ 0x2c5e6718 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e6718(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e6838,0x86,_LAB_2c5e6848,_LAB_2c5e6850,_LAB_2c5e684c);
  }
  piVar1 = (int *)FUN_2c62107c(param_2);
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar5 = *piVar1;
  if (iVar5 == 1) {
    *_LAB_2c5e683c = 1;
    iVar5 = FUN_2c5e6664();
    if (iVar5 == 0) {
LAB_2c5e67e0:
      FUN_2c6072bc(*_LAB_2c5e6840,1,0x10);
      iVar5 = *param_2;
      goto joined_r0x2c5e67f4;
    }
    uVar3 = 0x10;
    uVar4 = 0x66;
    uVar2 = *_LAB_2c5e6840;
    uVar6 = 1;
  }
  else if (iVar5 == 2) {
    uVar6 = 3;
    *_LAB_2c5e683c = 3;
    iVar5 = FUN_2c5e6664();
    if (iVar5 == 0) {
LAB_2c5e678c:
      uVar4 = 0x10;
      uVar3 = 0xfffffff0;
      uVar6 = 3;
      uVar2 = *_LAB_2c5e6840;
    }
    else {
      uVar3 = 0xfffffff0;
      uVar4 = 0x66;
      uVar2 = *_LAB_2c5e6840;
    }
  }
  else {
    if (iVar5 == 3) {
      *_LAB_2c5e683c = 4;
      iVar5 = FUN_2c5e6664();
      if (iVar5 == 0) goto LAB_2c5e67e0;
      uVar6 = 4;
      uVar3 = 0x10;
      uVar2 = *_LAB_2c5e6840;
    }
    else {
      if (iVar5 != 4) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5e6838,0x74,_LAB_2c5e6834,_LAB_2c5e6830);
      }
      uVar6 = 6;
      *_LAB_2c5e683c = 6;
      iVar5 = FUN_2c5e6664();
      if (iVar5 == 0) goto LAB_2c5e678c;
      uVar3 = 0xfffffff0;
      uVar2 = *_LAB_2c5e6840;
    }
    uVar4 = 0xffffff44;
  }
  FUN_2c6072bc(uVar2,uVar6,uVar3,uVar4);
  iVar5 = *param_2;
joined_r0x2c5e67f4:
  if (iVar5 == 0x3f8) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5e6838,0x8e,_LAB_2c5e6848,_LAB_2c5e6854);
  }
  if (iVar5 != 0x3f9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5e6838,0x90,_LAB_2c5e6848,_LAB_2c5e6844);
}

