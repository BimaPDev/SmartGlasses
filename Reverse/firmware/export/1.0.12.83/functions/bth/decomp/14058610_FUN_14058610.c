/* FUN_14058610 @ 0x14058610 */

void FUN_14058610(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_r3;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = DAT_140586e0;
  iVar7 = *(int *)(DAT_140586e0 + 0x44);
  uVar3 = FUN_140e5848();
  bVar5 = *(byte *)(iVar2 + 0x4e) & 0xfe;
  *(byte *)(iVar2 + 0x4e) = bVar5;
  if (iVar7 != 0) {
    do {
      while( true ) {
        iVar6 = (uint)*(ushort *)(iVar7 + 6) - ((uVar3 & 0xfffff) >> 4);
        sVar1 = (short)iVar6;
        if (0 < sVar1) {
          iVar4 = *(int *)(iVar2 + 0x40);
          iVar8 = *(int *)(iVar2 + 0x48);
          if (iVar4 == 0) {
            iVar4 = FUN_140e52f8(DAT_140586dc,0,0,iVar6,in_r3);
            *(int *)(iVar2 + 0x40) = iVar4;
          }
          FUN_140e5378(iVar4,(int)sVar1);
          if (iVar8 != iVar7) {
            return;
          }
          *(short *)(iVar2 + 0x4c) = sVar1;
          return;
        }
        FUN_14073a58(iVar2 + 0x44);
        *(uint *)(iVar7 + 4) = *(uint *)(iVar7 + 4) | 0x4000;
        FUN_140739f0(iVar2 + 0x38,iVar7);
        if ((*(byte *)(iVar2 + 0x4e) & 6) != 0) break;
        FUN_14072a44(*(byte *)(iVar2 + 0x4e) & 6,iVar2 + 0x30);
        iVar7 = *(int *)(iVar2 + 0x44);
        *(byte *)(iVar2 + 0x4e) = *(byte *)(iVar2 + 0x4e) | 2;
        if (iVar7 == 0) goto LAB_14058690;
      }
      iVar7 = *(int *)(iVar2 + 0x44);
    } while (iVar7 != 0);
LAB_14058690:
    bVar5 = *(byte *)(iVar2 + 0x4e) & 0xfe;
  }
  *(byte *)(iVar2 + 0x4e) = bVar5;
  FUN_140e5718(*(undefined4 *)(iVar2 + 0x40));
  *(undefined2 *)(iVar2 + 0x4c) = 0;
  return;
}

