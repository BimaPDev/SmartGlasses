/* FUN_14084c28 @ 0x14084c28 */

int FUN_14084c28(undefined4 param_1,short param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_1408e504((ushort)(param_2 + 0xc) + 10,0,param_4,param_5,param_4);
  if (iVar2 != 0) {
    FUN_140754ec(iVar2,8);
    iVar3 = FUN_14075250(iVar2);
    puVar4 = (undefined4 *)(iVar3 - 8U & 0xfffffffc);
    *puVar4 = param_1;
    puVar4[1] = param_3;
    sVar1 = FUN_14075250(iVar2);
    *(undefined4 **)(iVar2 + 0xc) = puVar4;
    *(short *)(iVar2 + 6) = *(short *)(iVar2 + 6) - (sVar1 - (short)puVar4);
  }
  return iVar2;
}

