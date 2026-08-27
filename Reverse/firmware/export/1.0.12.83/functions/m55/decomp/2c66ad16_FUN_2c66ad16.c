/* FUN_2c66ad16 @ 0x2c66ad16 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c66ad16(uint param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 unaff_r4;
  int iVar4;
  
  iVar4 = *param_4;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x18) == 0)) {
    FUN_2c668868(iVar4);
  }
  puVar1 = *(undefined4 **)(iVar4 + 8);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x18) == 0)) {
    FUN_2c668868();
  }
  if (puVar1 == _LAB_2c66acf8) {
    puVar1 = *(undefined4 **)(iVar4 + 4);
  }
  else if (puVar1 == _LAB_2c66acfc) {
    puVar1 = *(undefined4 **)(iVar4 + 8);
  }
  else if (puVar1 == _LAB_2c66ad00) {
    puVar1 = *(undefined4 **)(iVar4 + 0xc);
  }
  if ((-1 < (int)(puVar1[0x19] << 0x1f)) && (-1 < (int)((uint)*(ushort *)(puVar1 + 3) << 0x16))) {
    FUN_2c6694a8(puVar1[0x16]);
  }
  uVar2 = puVar1[2] - 1;
  puVar1[2] = uVar2;
  if (((int)uVar2 < 0) && (((int)uVar2 < (int)puVar1[6] || (uVar2 = param_1 & 0xff, uVar2 == 10))))
  {
    param_1 = FUN_2c66de98(iVar4,param_1,puVar1,uVar2,unaff_r4);
  }
  else {
    puVar3 = (undefined1 *)*puVar1;
    *puVar1 = puVar3 + 1;
    *puVar3 = (char)param_1;
    param_1 = param_1 & 0xff;
  }
  if ((-1 < (int)(puVar1[0x19] << 0x1f)) && (-1 < (int)((uint)*(ushort *)(puVar1 + 3) << 0x16))) {
    FUN_2c6694ac(puVar1[0x16]);
  }
  return param_1;
}

