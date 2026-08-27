/* FUN_2c621d68 @ 0x2c621d68 */

undefined4 FUN_2c621d68(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  if (((((*param_1 == *param_2) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) &&
       (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) &&
      ((*(int *)(param_1 + 0x10) == 0 ||
       (((*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14) &&
         (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))) &&
        (*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c))))))) &&
     (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) {
    iVar3 = *(int *)(param_1 + 0xc) * 4;
    if (iVar3 != 0) {
      pcVar2 = (char *)(*(int *)(param_1 + 8) + -1);
      pcVar1 = (char *)(*(int *)(param_2 + 8) + -1);
      do {
        pcVar2 = pcVar2 + 1;
        pcVar1 = pcVar1 + 1;
        if (*pcVar2 != *pcVar1) {
          return 0;
        }
      } while (pcVar2 != (char *)(*(int *)(param_1 + 8) + iVar3 + -1));
    }
    return 1;
  }
  return 0;
}

