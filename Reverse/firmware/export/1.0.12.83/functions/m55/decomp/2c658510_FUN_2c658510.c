/* FUN_2c658510 @ 0x2c658510 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c658510(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 0x20);
  if (param_2 != 0xffffffff) {
    iVar1 = *_LAB_2c66ad10;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 0)) {
      FUN_2c668868();
    }
    if (puVar2 == _LAB_2c66acf8) {
      puVar2 = *(undefined4 **)(iVar1 + 4);
    }
    else if (puVar2 == _LAB_2c66acfc) {
      puVar2 = *(undefined4 **)(iVar1 + 8);
    }
    else if (puVar2 == _LAB_2c66ad00) {
      puVar2 = *(undefined4 **)(iVar1 + 0xc);
    }
    if ((-1 < (int)(puVar2[0x19] << 0x1f)) && (-1 < (int)((uint)*(ushort *)(puVar2 + 3) << 0x16))) {
      FUN_2c6694a8(puVar2[0x16]);
    }
    iVar3 = puVar2[2] + -1;
    puVar2[2] = iVar3;
    if ((iVar3 < 0) && ((iVar3 < (int)puVar2[6] || ((param_2 & 0xff) == 10)))) {
      param_2 = FUN_2c66de98(iVar1,param_2,puVar2);
    }
    else {
      puVar4 = (undefined1 *)*puVar2;
      *puVar2 = puVar4 + 1;
      *puVar4 = (char)param_2;
      param_2 = param_2 & 0xff;
    }
    if ((-1 < (int)(puVar2[0x19] << 0x1f)) && (-1 < (int)((uint)*(ushort *)(puVar2 + 3) << 0x16))) {
      FUN_2c6694ac(puVar2[0x16]);
    }
    return param_2;
  }
  iVar1 = func_0x2c668794(puVar2);
  return -(uint)(iVar1 != 0);
}

