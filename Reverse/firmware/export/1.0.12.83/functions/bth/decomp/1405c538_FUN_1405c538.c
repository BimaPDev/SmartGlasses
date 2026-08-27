/* FUN_1405c538 @ 0x1405c538 */

undefined4 FUN_1405c538(uint param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  
  if (1 < param_1) {
    return 0x43;
  }
  iVar6 = *(int *)(DAT_1405c604 + param_1 * 4);
  if (iVar6 != 0) {
    *(undefined4 *)(iVar6 + 0x3c) = param_2;
    if (param_3 != (undefined4 *)0x0) {
      bVar1 = *(byte *)(param_3 + 10);
      bVar7 = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        *(ushort *)(iVar6 + 0x3a) = *(ushort *)(iVar6 + 0x3a) & 0xffe8;
        FUN_1406dca0(param_1,1);
      }
      else {
        iVar2 = FUN_1405c378(iVar6,0,bVar1,*(undefined1 *)((int)param_3 + 0x2a));
        bVar7 = 1;
        *(undefined4 *)(iVar6 + 0x2c) = param_3[4];
        *(undefined4 *)(iVar6 + 0x30) = param_3[9];
        uVar3 = param_3[1];
        uVar4 = param_3[2];
        uVar5 = param_3[3];
        *(undefined4 *)(iVar2 + 0xc) = *param_3;
        *(undefined4 *)(iVar2 + 0x10) = uVar3;
        *(undefined4 *)(iVar2 + 0x14) = uVar4;
        *(undefined4 *)(iVar2 + 0x18) = uVar5;
        uVar5 = param_3[5];
        uVar3 = param_3[7];
        uVar4 = param_3[8];
        *(undefined4 *)(iVar2 + 0x20) = param_3[6];
        *(undefined4 *)(iVar2 + 0x1c) = uVar5;
        *(undefined4 *)(iVar2 + 0x24) = uVar3;
        *(undefined4 *)(iVar2 + 0x28) = uVar4;
        FUN_1406dca0(param_1,1);
      }
      FUN_1405cd44(param_1,bVar7,*(undefined2 *)(param_3 + 0xb),*(undefined2 *)((int)param_3 + 0x2e)
                   ,*(undefined2 *)(param_3 + 0xc),*(undefined1 *)((int)param_3 + 0x32));
      FUN_1405bb44(param_1,bVar7,*(undefined1 *)((int)param_3 + 0x29),
                   *(undefined1 *)((int)param_3 + 0x2b));
      return 0;
    }
    *(ushort *)(iVar6 + 0x3a) = *(ushort *)(iVar6 + 0x3a) & 0xffe8;
    FUN_1406dca0(param_1,1);
    FUN_1405bb44(param_1,0,0,0);
    return 0;
  }
  return 0x43;
}

