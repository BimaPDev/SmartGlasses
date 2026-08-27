/* FUN_140933d8 @ 0x140933d8 */

int FUN_140933d8(int param_1)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x350);
  iVar3 = FUN_140e5368(param_1 + 4);
  if ((iVar3 != 0) && (iVar6 = *(int *)(param_1 + 4), iVar6 != 0)) {
    iVar4 = FUN_14079aa8(iVar7,*(int *)(iVar6 + 0x28) != 0);
    iVar3 = 0;
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x348) = iVar6;
      FUN_140e5268(iVar6);
      if (*(int *)(iVar6 + 0x28) == 0) {
        if (iVar7 == 0) {
          return 1;
        }
        if ((iVar6 != 0) && (*(ushort *)(iVar6 + 10) < 0x7c)) {
          FUN_140755e4();
          *(undefined4 *)(iVar7 + 0x7c) = 0;
          *(undefined4 *)(iVar7 + 0x80) = 0;
          *(undefined4 *)(iVar7 + 0x84) = 0;
          *(undefined4 *)(iVar7 + 0x88) = 0;
          *(undefined4 *)(iVar7 + 0x8c) = 0;
          *(undefined4 *)(iVar7 + 0x90) = 0;
          *(undefined4 *)(iVar7 + 0x94) = 0;
          FUN_140e5658(iVar7 + 400,0,0x80);
          uVar1 = *(undefined1 *)(iVar6 + 0x2c);
          *(undefined1 *)(iVar7 + 0x191) = 0x48;
          *(undefined1 *)(iVar7 + 400) = uVar1;
          uVar1 = *(undefined1 *)(DAT_1407a1d8 + 1);
          *(undefined2 *)(iVar7 + 0x193) = *DAT_1407a1d8;
          *(undefined1 *)(iVar7 + 0x195) = uVar1;
          *(undefined1 *)(iVar7 + 0x196) = *(undefined1 *)(iVar6 + 8);
          *(char *)(iVar7 + 0x198) = (char)((ushort)*(undefined2 *)(iVar6 + 10) >> 8);
          *(char *)(iVar7 + 0x199) = (char)*(undefined2 *)(iVar6 + 10);
          if (*(short *)(iVar6 + 10) == 0) {
            iVar3 = 10;
          }
          else {
            FUN_140e5278(iVar7 + 0x19a,*(undefined4 *)(iVar6 + 0xc));
            iVar3 = *(ushort *)(iVar6 + 10) + 10;
          }
          *(undefined1 *)(iVar7 + 0x86) = 0xe;
          *(ushort *)(iVar7 + 0x84) = *(ushort *)(iVar7 + 0x84) & 0xf0 | 0x1102;
          *(byte *)(iVar7 + 0x84) = *(char *)(iVar6 + 9) << 4 | 2;
          *(int *)(iVar7 + 0x90) = iVar3;
          *(int *)(iVar7 + 0x8c) = iVar7 + 400;
          *(undefined1 *)(iVar7 + 0x87) = 1;
          iVar3 = FUN_14079ebc(iVar7 + 8,iVar7 + 0x7c);
          FUN_1407561c();
          return iVar3;
        }
        return 1;
      }
      if (iVar7 == 0) {
        return 1;
      }
      if ((iVar6 != 0) && (*(ushort *)(iVar6 + 10) < 0x7c)) {
        FUN_140755e4();
        *(undefined4 *)(iVar7 + 0x60) = 0;
        *(undefined4 *)(iVar7 + 100) = 0;
        *(undefined4 *)(iVar7 + 0x68) = 0;
        *(undefined4 *)(iVar7 + 0x6c) = 0;
        *(undefined4 *)(iVar7 + 0x70) = 0;
        *(undefined4 *)(iVar7 + 0x74) = 0;
        *(undefined4 *)(iVar7 + 0x78) = 0;
        FUN_140e5658(iVar7 + 0x110,0,0x80);
        puVar2 = DAT_1407a0f0;
        *(undefined1 *)(iVar7 + 0x111) = 0x48;
        uVar1 = *(undefined1 *)(puVar2 + 1);
        *(undefined2 *)(iVar7 + 0x113) = *puVar2;
        *(undefined1 *)(iVar7 + 0x115) = uVar1;
        uVar1 = *(undefined1 *)(iVar6 + 8);
        *(undefined1 *)(iVar7 + 0x116) = uVar1;
        switch(uVar1) {
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x15:
        case 0x16:
        case 0x20:
        case 0x30:
          *(undefined1 *)(iVar7 + 0x110) = 1;
          break;
        case 0x31:
          *(undefined1 *)(iVar7 + 0x110) = 3;
        }
        if (*(ushort *)(iVar6 + 10) + 10 < 0x81) {
          *(char *)(iVar7 + 0x118) = (char)(*(ushort *)(iVar6 + 10) >> 8);
          *(char *)(iVar7 + 0x119) = (char)*(undefined2 *)(iVar6 + 10);
          if (*(short *)(iVar6 + 10) == 0) {
            uVar5 = 10;
          }
          else {
            FUN_140e5278(iVar7 + 0x11a,*(undefined4 *)(iVar6 + 0xc));
            uVar5 = (uint)(ushort)(*(short *)(iVar6 + 10) + 10);
          }
          *(uint *)(iVar7 + 0x74) = uVar5;
          uVar5 = (*(byte *)(iVar7 + 0x1e) >> 4) + 1 & 0xf;
          *(ushort *)(iVar7 + 0x68) = (ushort)(uVar5 << 4) | 0x1100;
          *(byte *)(iVar7 + 0x1e) = *(byte *)(iVar7 + 0x1e) & 0xf | (byte)(uVar5 << 4);
          *(int *)(iVar7 + 0x70) = iVar7 + 0x110;
          *(undefined1 *)(iVar7 + 0x6a) = 0xe;
          iVar3 = FUN_14079ebc(iVar7 + 8,iVar7 + 0x60);
          FUN_1407561c();
          return iVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_1407a0f8,DAT_1407a0f4);
      }
      return 1;
    }
  }
  return iVar3;
}

