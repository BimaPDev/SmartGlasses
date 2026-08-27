/* FUN_2c64e460 @ 0x2c64e460 */

char * FUN_2c64e460(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  if ((*param_1 == '\0') && (*(char **)(*(int *)(param_1 + 4) + 4) == param_1)) {
    pcVar2 = *(char **)(*(char **)(*(int *)(param_1 + 4) + 4) + 0xc);
  }
  else {
    pcVar1 = *(char **)(param_1 + 8);
    if (*(char **)(param_1 + 8) == (char *)0x0) {
      for (pcVar2 = *(char **)(param_1 + 4); *(char **)(pcVar2 + 8) == param_1;
          pcVar2 = *(char **)(pcVar2 + 4)) {
        param_1 = pcVar2;
      }
    }
    else {
      do {
        pcVar2 = pcVar1;
        pcVar1 = *(char **)(pcVar2 + 0xc);
      } while (*(char **)(pcVar2 + 0xc) != (char *)0x0);
    }
  }
  return pcVar2;
}

