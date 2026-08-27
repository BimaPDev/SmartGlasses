/* FUN_2c5f545c @ 0x2c5f545c */

void FUN_2c5f545c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_2c5fb8a0(param_2);
  piVar1 = (int *)uVar5;
  iVar4 = (int)((ulonglong)uVar5 >> 0x20);
  while (iVar2 = FUN_2c5fb8f8(piVar1,iVar4), iVar2 != 1) {
    while ((((uVar5 = FUN_2c5fb994(), iVar4 = (int)((ulonglong)uVar5 >> 0x20), iVar3 = (int)uVar5,
             *(int *)(iVar3 + 0x1c) != 0 && (-1 < (int)((uint)*(ushort *)(iVar3 + 0x36) << 0x1b)))
            && (iVar2 == 2)) && (iVar4 = iVar3, *(char *)(iVar3 + 0x34) != '\x0e'))) {
      FUN_2c5f7ad4(param_1,iVar3,param_3,param_4);
      (**(code **)(param_1 + 8))(*(undefined4 *)(iVar3 + 0x1c));
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(ushort *)(iVar3 + 0x36) = *(ushort *)(iVar3 + 0x36) | 0x10;
      iVar2 = FUN_2c5fb8f8(piVar1);
      if (iVar2 == 1) goto LAB_2c5fb8f0;
    }
  }
LAB_2c5fb8f0:
                    /* WARNING: Could not recover jumptable at 0x2c5fb8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 8))();
  return;
}

