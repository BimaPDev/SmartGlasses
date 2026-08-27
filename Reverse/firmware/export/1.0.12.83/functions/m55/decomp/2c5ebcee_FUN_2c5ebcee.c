/* FUN_2c5ebcee @ 0x2c5ebcee */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5ebcee(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(char **)(*param_4 + 0x54);
  do {
    while( true ) {
      if (pcVar3 == (char *)0x0) {
        return 0;
      }
      iVar1 = FUN_2c606c34(*(undefined4 *)(pcVar3 + 0x44));
      if (iVar1 == 0) {
        func_0x2c5ebb30();
        func_0x2c5ebad8();
      }
      if ((pcVar3[0x58] == '\0') &&
         (iVar1 = FUN_2c5eb68c(*(undefined4 *)(pcVar3 + 0x44)), iVar1 != 0)) break;
LAB_2c5ebd04:
      pcVar3 = *(char **)(pcVar3 + 0x54);
    }
    if (*pcVar3 != '\0') {
LAB_2c5ebd2c:
      iVar1 = (**(code **)(pcVar3 + 0x50))(pcVar3,param_1);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5ebdb8,0x18d,_LAB_2c5ebdbc,_LAB_2c5ebdb4,pcVar3,param_1);
      }
      goto LAB_2c5ebd04;
    }
    pcVar4 = *(code **)(pcVar3 + 0x50);
    uVar2 = registry_lookup(*(undefined4 *)(pcVar3 + 0x40));
    iVar1 = (*pcVar4)(uVar2,param_1);
    if (iVar1 == 0) {
      uVar2 = registry_lookup(*(undefined4 *)(pcVar3 + 0x40));
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5ebdb8,0x188,_LAB_2c5ebdbc,_LAB_2c5ebdb4,uVar2,param_1);
    }
    if (*pcVar3 != '\0') goto LAB_2c5ebd2c;
    pcVar3 = *(char **)(pcVar3 + 0x54);
  } while( true );
}

