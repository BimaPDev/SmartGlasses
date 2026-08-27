/* FUN_2c53ca1c @ 0x2c53ca1c */

/* WARNING: Removing unreachable block (ram,0x2c638900) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c53ca1c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  byte bVar3;
  undefined4 extraout_r3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c53cac0,0x123,_DAT_2c53cabc,_DAT_2c53cab8);
  }
  if ((*(code **)**(undefined4 **)(param_1 + 0x38) != _LAB_2c53cab0) &&
     (iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x38))(), iVar2 != 0)) {
    return;
  }
  iVar2 = _DAT_2c53cab4;
  if (*(int *)(param_1 + 0x28) != 0) {
    return;
  }
  uVar1 = FUN_2c53c91c(param_1,*(undefined2 *)(_DAT_2c53cab4 + 6),*(undefined2 *)(_DAT_2c53cab4 + 8)
                      );
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  FUN_2c628b70(uVar1,0,3,1,1,3,1);
  uVar1 = FUN_2c53c988(param_1,*(undefined4 *)(param_1 + 0x24),*(undefined2 *)(iVar2 + 6),
                       *(undefined2 *)(iVar2 + 8));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  FUN_2c6072b4(uVar1,7);
  FUN_2c606e74(*(undefined4 *)(param_1 + 0x28),0x99,0);
  FUN_2c6388cc(*(undefined4 *)(param_1 + 0x28),1);
  iVar2 = *(int *)(param_1 + 0x28);
  FUN_2c62e838(iVar2,DAT_2c63895c);
  FUN_2c62e838(iVar2,DAT_2c638960);
  uVar1 = 0;
  *(undefined2 *)(iVar2 + 0x4e) = 0;
  *(undefined2 *)(iVar2 + 0x50) = 0;
  bVar3 = *(byte *)(iVar2 + 0x52) & 7;
  *(byte *)(iVar2 + 0x52) = *(byte *)(iVar2 + 0x52) & 0xdf | 0x20;
  if (bVar3 == 1) {
    if (*(int *)(iVar2 + 0x30) == -1) goto LAB_2c63891c;
    FUN_2c637248(iVar2);
    bVar3 = *(byte *)(iVar2 + 0x52) & 7;
    uVar1 = extraout_r1_00;
  }
  if ((bVar3 == 2) && (*(int *)(iVar2 + 0x34) != -1)) {
    FUN_2c637248(iVar2);
    uVar1 = extraout_r1;
  }
LAB_2c63891c:
  *(byte *)(iVar2 + 0x52) = *(byte *)(iVar2 + 0x52) & 0xf8 | 4;
  if (*(int *)(iVar2 + 0x24) == 0) {
    return;
  }
  FUN_2c637b3c(iVar2,uVar1,*(int *)(iVar2 + 0x24),extraout_r3);
  return;
}

