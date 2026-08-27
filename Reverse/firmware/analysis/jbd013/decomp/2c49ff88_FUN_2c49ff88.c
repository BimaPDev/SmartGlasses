/* FUN_2c49ff88 @ 0x2c49ff88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49ff88(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = _LAB_2c49ffd4;
  puVar2 = (undefined4 *)*_LAB_2c49ffd4;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)func_0x2c49f300(0x1c);
    *piVar1 = (int)puVar2;
  }
  if (param_1 != (undefined4 *)0x0) {
    *puVar2 = *param_1;
    iVar3 = *piVar1;
    *(undefined4 *)(iVar3 + 4) = param_1[1];
    *(undefined4 *)(iVar3 + 8) = param_1[2];
    *(undefined4 *)(iVar3 + 0xc) = param_1[3];
    *(undefined4 *)(iVar3 + 0x10) = param_1[4];
    *(undefined4 *)(iVar3 + 0x14) = param_1[5];
    *(undefined4 *)(iVar3 + 0x18) = param_1[6];
    return;
  }
  *puVar2 = 0;
  iVar3 = *piVar1;
  *(undefined4 *)(iVar3 + 4) = 0;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  return;
}

