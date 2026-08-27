/* FUN_140dabf4 @ 0x140dabf4 */

undefined4 * FUN_140dabf4(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (param_2 + -1) * 0x68;
  puVar1 = (undefined4 *)FUN_140db8a8(param_1,iVar2 + 0x74);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = param_2;
    puVar1[2] = puVar1 + 3;
    FUN_140e5658(puVar1 + 3,0,iVar2 + 0x68);
  }
  return puVar1;
}

