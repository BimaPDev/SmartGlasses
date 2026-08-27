/* FUN_14094bac @ 0x14094bac */

undefined4 FUN_14094bac(int param_1,undefined2 *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_140755e4();
  iVar2 = *param_3;
  if ((iVar2 == 0) || (param_1 == 0)) {
LAB_14094c12:
    uVar1 = 1;
  }
  else {
    if (param_2 != (undefined2 *)0x0) {
      *(undefined2 *)(param_1 + 0x18) = *param_2;
      *(undefined2 *)(param_1 + 0x1a) = param_2[1];
      *(undefined2 *)(param_1 + 0x1c) = param_2[2];
      *(undefined2 *)(param_1 + 0x1e) = param_2[3];
      iVar2 = *param_3;
    }
    iVar3 = param_1 + 0x34;
    if (*(char *)(param_1 + 0x34) == '\0') {
      FUN_14075168(iVar3,iVar2,DAT_14094c20,param_1,1);
      if (*(char *)(param_1 + 0x34) == '\0') goto LAB_14094c12;
    }
    else {
      FUN_14074ff8(iVar3,iVar2,DAT_14094c20,param_1,1);
    }
    FUN_14075074(iVar3);
    uVar1 = 0;
    if ((char)param_3[1] != '\0') {
      uVar1 = 0;
      *(int *)(param_1 + 0x38) = *param_3;
    }
  }
  FUN_1407561c();
  return uVar1;
}

