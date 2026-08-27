/* FUN_2c632624 @ 0x2c632624 */

void FUN_2c632624(int param_1,undefined1 *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = *(int *)(param_1 + 0x30);
  if (iVar4 == 0) {
    *param_2 = 0;
    return;
  }
  pcVar1 = (char *)FUN_2c66c4ec(iVar4);
  if (pcVar1 != (char *)0x0) {
    pcVar3 = (char *)(iVar4 + -1);
    uVar2 = 0;
    pcVar5 = pcVar3 + (int)pcVar1;
    do {
      pcVar6 = pcVar3 + (1 - iVar4);
      if (*(ushort *)(param_1 + 0x38) == uVar2) {
        if (pcVar6 < pcVar1) {
          pcVar3 = param_2 + -1;
          uVar2 = 0;
          goto LAB_2c632686;
        }
        break;
      }
      pcVar3 = pcVar3 + 1;
      if (*pcVar3 == '\n') {
        uVar2 = uVar2 + 1;
      }
    } while (pcVar3 != pcVar5);
  }
LAB_2c632692:
  *param_2 = 0;
  return;
LAB_2c632686:
  iVar4 = iVar4 + uVar2;
  if ((pcVar6[iVar4] == '\n') || ((param_3 != 0 && (param_3 - 1U <= uVar2)))) goto LAB_2c632690;
  uVar2 = uVar2 + 1;
  pcVar3 = pcVar3 + 1;
  *pcVar3 = pcVar6[iVar4];
  if (uVar2 == (int)pcVar1 - (int)pcVar6) goto LAB_2c632690;
  iVar4 = *(int *)(param_1 + 0x30);
  goto LAB_2c632686;
LAB_2c632690:
  param_2 = param_2 + uVar2;
  goto LAB_2c632692;
}

