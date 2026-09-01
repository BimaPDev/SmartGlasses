/* FUN_10135176 @ 0x10135176 */

void FUN_10135176(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((((*param_2 << 0x1f < 0) && (*(int *)(param_1 + -8) != 0)) && (*(int *)(param_1 + 0xd4) == 0))
     && (((puVar1 = (undefined4 *)FUN_10134df4(*(int *)(param_1 + -8) + 4),
          puVar1 != (undefined4 *)0x0 && (iVar2 = FUN_100cf698(param_1 + -8,puVar1), iVar2 < 0)) &&
         (puVar1 != *(undefined4 **)(param_1 + 0xd4))))) {
    iVar2 = *(int *)(param_1 + -8);
    *puVar1 = *(undefined4 *)(iVar2 + 4);
    *(undefined4 **)(iVar2 + 4) = puVar1;
    if (*(int *)(iVar2 + 8) == 0) {
      *(undefined4 **)(iVar2 + 8) = puVar1;
    }
  }
  return;
}

