/* FUN_2c5e94ec @ 0x2c5e94ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e94ec(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = *(char **)(param_1 + 0x10);
  if (*pcVar3 == '\0') {
    *param_2 = *(undefined4 *)(param_1 + 0x20);
    return;
  }
  pcVar4 = *(char **)(param_1 + 0x20);
  if (*pcVar4 != '\0') {
    if (**(char **)(param_1 + 0x14) == '\0') {
      *param_2 = pcVar4;
      FUN_2c62bea8(*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
      return;
    }
    iVar2 = FUN_2c66b624(pcVar4,pcVar3);
    uVar1 = _LAB_2c5e9590;
    if (iVar2 == 0) {
      *param_2 = pcVar4;
      return;
    }
    iVar2 = FUN_2c66b450(0,0,_LAB_2c5e9580,pcVar4,_LAB_2c5e9590,pcVar3);
    pcVar3 = (char *)FUN_2c62c45c(iVar2 + 1);
    if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c5e958c,0x56,_LAB_2c5e9588,_LAB_2c5e9584);
    }
    FUN_2c66b4b8(pcVar3,_LAB_2c5e9580,*(undefined4 *)(param_1 + 0x20),uVar1,
                 *(undefined4 *)(param_1 + 0x10));
  }
  *param_2 = pcVar3;
  return;
}

