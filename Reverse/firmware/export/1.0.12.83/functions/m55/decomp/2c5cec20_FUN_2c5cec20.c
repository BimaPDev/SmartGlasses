/* FUN_2c5cec20 @ 0x2c5cec20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cec20(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_c;
  
  uStack_c = param_2;
  iVar1 = registry_lookup(param_2);
  if (iVar1 != 0) {
    pcVar2 = (char *)registry_lookup(uStack_c);
    if (*pcVar2 != '\0') {
      FUN_2c620fa4(0x3fc,&uStack_c);
      if (*(int *)(param_1 + 0x54) != 0) {
        *(undefined1 *)(param_1 + 0x52) = 1;
        FUN_2c62be74();
        FUN_2c62be4c(*(undefined4 *)(param_1 + 0x54));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5cec84,0x234,_LAB_2c5cec80,_LAB_2c5cec7c,uStack_c);
}

