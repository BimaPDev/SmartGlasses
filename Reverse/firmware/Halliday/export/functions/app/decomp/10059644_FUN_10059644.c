/* FUN_10059644 @ 0x10059644 */

void FUN_10059644(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = DAT_100596a8;
  iVar7 = *(int *)(param_1 + 8);
  if (*(char *)(iVar7 + 0x42) != '\0') {
    iVar2 = iVar7 + 0x42;
    do {
      uVar3 = (uint)*(ushort *)(iVar7 + 0x3c);
      bVar1 = *(byte *)((uint)*(byte *)(iVar2 + uVar3 + -1) + iVar6);
      uVar4 = bVar1 & 8;
      if ((bVar1 & 8) == 0) {
        *(char *)(iVar2 + uVar3) = (char)uVar4;
        do {
          uVar5 = uVar4;
          uVar3 = (uint)uVar5;
          uVar4 = uVar5 + 1;
        } while ((*(byte *)(iVar6 + (uint)*(byte *)(iVar2 + uVar3)) & 8) != 0);
        if (uVar3 != 0) {
          uVar4 = *(ushort *)(iVar7 + 0x3c);
          iVar6 = uVar4 + 1;
          FUN_1011ea38(iVar2,iVar2 + uVar3,iVar6 - uVar3,iVar6,param_4);
          *(ushort *)(iVar7 + 0x3c) = uVar4 - uVar5;
        }
        goto LAB_10059650;
      }
      *(short *)(iVar7 + 0x3c) = (short)(uVar3 - 1);
    } while ((uVar3 - 1 & 0xffff) != 0);
    *(undefined1 *)(iVar7 + 0x42) = 0;
  }
LAB_10059650:
  *(undefined2 *)(*(int *)(param_1 + 8) + 0x3e) = *(undefined2 *)(*(int *)(param_1 + 8) + 0x3c);
  return;
}

