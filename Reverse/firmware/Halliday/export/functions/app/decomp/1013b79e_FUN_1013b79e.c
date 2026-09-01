/* FUN_1013b79e @ 0x1013b79e */

void FUN_1013b79e(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_14;
  
  local_14 = *(int *)(param_1 + 0x14);
  iVar2 = param_2;
  if ((local_14 == 0) ||
     (iVar1 = FUN_10062a28(3,&local_14,param_3,local_14,param_1), iVar2 = local_14, iVar1 == 0)) {
    local_14 = iVar2;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    if ((*(char *)(param_1 + 0x31) == '\x01') && (*(int *)(param_1 + 0x2c) != 0)) {
      FUN_10139762();
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_10139762();
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      if (*(int *)(*(int *)(param_1 + 0x34) + 0x4c) != 0) {
        while (piVar3 = *(int **)(*(int *)(param_1 + 0x34) + 0x4c), piVar3 != (int *)0x0) {
          iVar2 = piVar3[3];
          if (*piVar3 != 0) {
            while (iVar1 = **(int **)(*(int *)(param_1 + 0x34) + 0x4c), iVar1 != 0) {
              uVar5 = *(undefined4 *)(iVar1 + 0x18);
              FUN_10139762();
              **(undefined4 **)(*(int *)(param_1 + 0x34) + 0x4c) = uVar5;
            }
          }
          FUN_10139762(*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x4c));
          *(int *)(*(int *)(param_1 + 0x34) + 0x4c) = iVar2;
        }
      }
      if (*(int *)(*(int *)(param_1 + 0x34) + 0x58) != 0) {
        while (puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x34) + 0x58),
              puVar4 != (undefined4 *)0x0) {
          uVar5 = *puVar4;
          if (puVar4[2] != 0) {
            while (iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0x58) + 8), iVar2 != 0) {
              uVar6 = *(undefined4 *)(iVar2 + 0x18);
              FUN_10139762();
              *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 0x58) + 8) = uVar6;
            }
          }
          FUN_10139762(*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x58));
          *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x58) = uVar5;
        }
      }
      if (*(int *)(*(int *)(param_1 + 0x34) + 0xc) != 0) {
        FUN_10139762();
      }
      FUN_10139762(*(undefined4 *)(param_1 + 0x34));
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined1 *)(param_1 + 0x45) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  return;
}

