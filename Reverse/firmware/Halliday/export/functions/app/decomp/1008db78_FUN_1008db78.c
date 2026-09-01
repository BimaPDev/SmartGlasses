/* FUN_1008db78 @ 0x1008db78 */

int FUN_1008db78(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_10128176(param_2,4);
  if ((param_1 == 0) ||
     ((iVar3 = FUN_101277b8(param_1), iVar3 == 0 && (*(int *)(param_1 + 8) == 0)))) {
    iVar3 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_1012b06a(DAT_1008dbd0);
    uVar1 = DAT_1008dbd0;
    iVar3 = 0;
    while ((puVar2 != (undefined4 *)0x0 &&
           (((code *)*puVar2 == (code *)0x0 ||
            (iVar3 = (*(code *)*puVar2)(puVar2,param_1,param_2), iVar3 != 1))))) {
      puVar2 = (undefined4 *)FUN_1012b076(uVar1,puVar2);
    }
  }
  return iVar3;
}

