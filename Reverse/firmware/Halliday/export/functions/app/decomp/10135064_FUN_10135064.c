/* FUN_10135064 @ 0x10135064 */

int FUN_10135064(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = FUN_10134e3e(uVar3);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  uVar1 = *(ushort *)(param_1 + 0x66);
  if ((uint)uVar1 < (uint)uVar4) {
    iVar2 = -0x7a;
  }
  else {
    *(int *)(param_1 + 0xdc) = iVar2;
    *(undefined4 *)(iVar2 + 8) = 0;
    iVar2 = FUN_100cf5a4(param_1,uVar3,0,(uint)uVar1,param_4);
    if (iVar2 != 0) {
      *(undefined4 *)(param_2 + 8) = uVar3;
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
  }
  return iVar2;
}

