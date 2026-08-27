/* FUN_2c62fa1a @ 0x2c62fa1a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c62fa1a(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  char in_ZR;
  
  if (in_ZR == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c62fa80,100,_LAB_2c62fa7c,_LAB_2c62fa84);
  }
  pcVar2 = *(char **)(param_2 + 4);
  if (*pcVar2 == '0') {
    if (pcVar2[1] == '\0') {
      *_LAB_2c62fa74 = 0;
      uVar1 = 0;
      goto LAB_2c62fa30;
    }
  }
  if ((*pcVar2 == '1') && (pcVar2[1] == '\0')) {
    uVar1 = 1;
    *_LAB_2c62fa74 = 1;
  }
  else {
    uVar1 = *_LAB_2c62fa74;
  }
LAB_2c62fa30:
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c62fa80,0x6c,_LAB_2c62fa7c,_LAB_2c62fa78,uVar1);
}

