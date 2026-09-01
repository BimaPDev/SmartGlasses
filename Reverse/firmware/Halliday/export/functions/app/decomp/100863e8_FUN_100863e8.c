/* FUN_100863e8 @ 0x100863e8 */

undefined4 FUN_100863e8(int param_1,uint param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = DAT_10086470;
  uVar1 = *(ushort *)(param_1 + 0xc);
  FUN_1011dbf4(DAT_10086474,0xffffffff,param_3,(uint)uVar1,param_1,param_2);
  uVar4 = *(uint *)(iVar2 + 0x28);
  uVar5 = 0x800 / uVar1 & 0xff;
  if (((param_2 <= uVar4 + uVar5) && (uVar4 < param_2 + param_3)) &&
     (param_1 == *(int *)(iVar2 + 0x2c))) {
    if ((int)((uint)*(byte *)(iVar2 + 0x24) << 0x1f) < 0) {
      if (((int)((uint)*(byte *)(iVar2 + 0x24) << 0x1d) < 0) &&
         (iVar3 = FUN_1011b508(*(undefined4 *)(iVar2 + 0x30),iVar2 + 0x34,uVar4,uVar5), iVar3 != 0))
      {
        FUN_100a5b78((DAT_1008647c - DAT_10086478) * 0x20 & 0xff00U | 0x6b0012,DAT_10086484,
                     DAT_10086480,*(undefined4 *)(iVar2 + 0x28),uVar5);
      }
      *(byte *)(iVar2 + 0x24) = *(byte *)(iVar2 + 0x24) & 0xfa;
    }
  }
  FUN_100863dc();
  return 0;
}

