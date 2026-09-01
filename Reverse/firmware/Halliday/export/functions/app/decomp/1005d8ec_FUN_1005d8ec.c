/* FUN_1005d8ec @ 0x1005d8ec */

void FUN_1005d8ec(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar1 = DAT_1005d9ac;
  local_28 = param_1;
  iStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  FUN_1011a8d6();
  FUN_1011ea48(puVar1,0,0xd88);
  *puVar1 = DAT_1005d9b0;
  iVar2 = FUN_10112e84(DAT_1005d9b4);
  if ((iVar2 != 0) && (iVar2 = (**(code **)(*(int *)(iVar2 + 8) + 8))(iVar2,&iStack_24), iVar2 == 0)
     ) {
    FUN_101221f0(&iStack_24,puVar1 + 1);
  }
  if ((param_2 != 0) && ((*(uint *)(param_2 + 0x1c) & 0x1ff) != 0)) {
    iVar2 = getMainStackPointer();
    local_28 = 0;
    iStack_24 = 0;
    iVar4 = iVar2 + 0x200;
    do {
      iVar3 = FUN_1011ea30(iVar2,param_2,0x20);
      if (iVar3 == 0) {
        FUN_1005d3f0(0,&local_28,&iStack_24);
        FUN_10119dc2(DAT_1005d9bc,local_28,(uint)(iStack_24 * local_28) / 100);
        FUN_1005d448(0,DAT_1005d9c0,0,0);
        FUN_1005d500(iVar2,iVar2 + 0x20,iVar2 + 0x400,param_2);
        if (*(byte *)((int)puVar1 + 3) < 0x20) {
          *(byte *)((int)puVar1 + 3) = *(byte *)((int)puVar1 + 3) + 1;
        }
        goto LAB_1005d998;
      }
      iVar2 = iVar2 + 4;
    } while (iVar4 != iVar2);
    FUN_10119dc2(DAT_1005d9b8);
  }
LAB_1005d998:
  FUN_10119dc2(DAT_1005d9c4);
  FUN_101134c4(DAT_1005d9c8,0);
  return;
}

