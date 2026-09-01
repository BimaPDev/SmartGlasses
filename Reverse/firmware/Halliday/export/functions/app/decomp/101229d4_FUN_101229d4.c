/* FUN_101229d4 @ 0x101229d4 */

int FUN_101229d4(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  pcVar3 = (char *)*param_1;
  if ((param_2 < 2) || (*(uint *)(pcVar3 + 0x34) <= param_2)) {
LAB_101229e4:
    iVar1 = 2;
  }
  else {
    uVar4 = param_2;
    if ((param_3 == 0) ||
       (((*pcVar3 == '\x04' && (*(char *)((int)param_1 + 7) == '\x02')) ||
        (iVar1 = FUN_101228d0(pcVar3,param_3,0xffffffff), iVar1 == 0)))) {
      do {
        uVar2 = FUN_1012270e(param_1,param_2);
        if (uVar2 == 0) break;
        if (uVar2 == 1) goto LAB_101229e4;
        if (uVar2 == 0xffffffff) {
          return 1;
        }
        if ((*pcVar3 != '\x04') && (iVar1 = FUN_101228d0(pcVar3,param_2,0), iVar1 != 0)) {
          return iVar1;
        }
        pcVar3[0x20] = '\0';
        pcVar3[0x21] = '\0';
        pcVar3[0x22] = '\0';
        pcVar3[0x23] = '\0';
        if (*(uint *)(pcVar3 + 0x1c) < *(int *)(pcVar3 + 0x34) - 2U) {
          *(uint *)(pcVar3 + 0x1c) = *(uint *)(pcVar3 + 0x1c) + 1;
          pcVar3[4] = pcVar3[4] | 1;
        }
        uVar5 = uVar4;
        if (((param_2 + 1 != uVar2) && (uVar5 = uVar2, *pcVar3 == '\x04')) &&
           (iVar1 = FUN_10122694(pcVar3,uVar4,(param_2 + 1) - uVar4,0), iVar1 != 0)) {
          return iVar1;
        }
        param_2 = uVar2;
        uVar4 = uVar5;
      } while (uVar2 < *(uint *)(pcVar3 + 0x34));
      if (*pcVar3 == '\x04') {
        if (param_3 == 0) {
          *(undefined1 *)((int)param_1 + 7) = 0;
        }
        else if (((*(char *)((int)param_1 + 7) == '\x03') && ((uint)param_1[2] <= param_3)) &&
                (param_3 <= (uint)(param_1[2] + param_1[6]))) {
          *(undefined1 *)((int)param_1 + 7) = 2;
        }
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}

