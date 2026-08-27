/* FUN_140b38e8 @ 0x140b38e8 */

int FUN_140b38e8(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [12];
  int local_1c;
  
  local_1c = *DAT_140b3c04;
  FUN_1402a6e8(4,0x1f8,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c00);
  FUN_1402a6e8(4,0x1f9,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c14,DAT_140b3c10,0);
  FUN_1402a6e8(4,0x1fa,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c1c,DAT_140b3c18,0);
  FUN_1402a6e8(4,0x1fb,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c24,DAT_140b3c20,0);
  FUN_1402a6e8(4,0x1fc,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c2c,DAT_140b3c28,0);
  FUN_1402a6e8(4,0x1fd,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c34,DAT_140b3c30,0x1000);
  FUN_1402a6e8(4,0x1fe,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c3c,DAT_140b3c38,0);
  FUN_1402a6e8(4,0x1ff,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c44,DAT_140b3c40,0x2000);
  FUN_1402a6e8(4,0x200,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c4c,DAT_140b3c48,0);
  FUN_1402a6e8(4,0x201,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c54,DAT_140b3c50,0x1000);
  FUN_1402a6e8(4,0x203,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c58);
  FUN_140b42ac();
  thunk_FUN_14047db8();
  thunk_FUN_14047a18();
  FUN_140a0e8c();
  FUN_1409eb54();
  FUN_140b4344(0,0xe);
  FUN_140b4c68();
  iVar2 = FUN_140b4b6c();
  if (iVar2 == 0) {
    iVar2 = FUN_14027bd8();
    uVar1 = DAT_140b3d8c;
    if (iVar2 << 6 < 0) {
      FUN_14027c7c(0x2000000);
      FUN_1402a6e8(4,0x235,DAT_140b3d78,DAT_140b3d74,uVar1);
    }
    iVar2 = FUN_14027bd8();
    uVar1 = DAT_140b3d88;
    if (iVar2 << 0xf < 0) {
      FUN_14027c7c(0x10000);
      FUN_1402a6e8(4,0x23c,DAT_140b3d78,DAT_140b3d74,uVar1);
      iVar2 = 2;
    }
    else {
      iVar2 = 9;
    }
    iVar3 = FUN_14027bd8();
    uVar1 = DAT_140b3d84;
    if (iVar3 << 0xb < 0) {
      FUN_14027c7c(0x100000);
      FUN_1402a6e8(4,0x243,DAT_140b3d78,DAT_140b3d74,uVar1);
      iVar2 = 8;
    }
    iVar3 = FUN_140adeac(0);
    if (iVar3 == 0) {
      FUN_14027be8(0x10000);
      uVar1 = DAT_140b3c5c;
      FUN_1402a6e8(4,0x120,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c5c,DAT_140b3c60);
      FUN_140ade54(DAT_140b3c64);
      FUN_140ade54(DAT_140b3c68);
      FUN_140ade54(DAT_140b3c6c);
      thunk_FUN_1404b580();
      FUN_1409d6e4();
      FUN_140a7de0();
      FUN_1409b000();
      FUN_140a1f1c();
      FUN_140a1f38();
      FUN_140a02ec();
      FUN_140a1804();
      FUN_1409ffb4(auStack_2c);
      FUN_1403ad40();
      FUN_140bfe38();
      FUN_140be684(DAT_140b3c70,DAT_140b3c74);
      FUN_140be630(1,0);
      FUN_140a50a8(DAT_140b3c78);
      FUN_140a5088(1);
      FUN_140a509c(1);
      FUN_140a4838();
      FUN_140afc24();
      FUN_140b0904();
      FUN_14050724();
      FUN_140a36bc();
      FUN_140a421c();
      FUN_140a3848();
      FUN_140a3268();
      FUN_140a4460();
      FUN_140a383c();
      FUN_140331bc();
      if (iVar2 == 8) {
        FUN_140b4344(0,10);
        FUN_1402a6e8(4,0x2bf,DAT_140b3d78,DAT_140b3d74,DAT_140b3d70,8);
        FUN_140b38e4();
        iVar2 = FUN_140b35fc();
        FUN_140ae07c();
      }
      else {
        thunk_FUN_14050368();
        iVar3 = FUN_140e5848();
        FUN_140e53d8(auStack_28,3,0xffffffff);
        iVar4 = FUN_140e5848();
        uVar5 = FUN_140e5548(iVar4 - iVar3);
        FUN_1402a6e8(4,0x13a,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c7c,uVar5);
        FUN_1402a6e8(4,0xe1,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c80);
        thunk_FUN_1409561c(1);
        thunk_FUN_14095630(1);
        thunk_FUN_14086600(DAT_140b3c84);
        thunk_FUN_1403dffc(0);
        thunk_FUN_14031648();
        thunk_FUN_140926a8();
        thunk_FUN_14048958(0,0,DAT_140b3c88);
        FUN_140b4344(0,10);
        FUN_1402a6e8(4,0x2bf,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c8c,iVar2);
        FUN_140b38e4();
        if (iVar2 == 2) {
          FUN_1403cee4();
          FUN_1402a6e8(4,0x18b,DAT_140b3d78,DAT_140b3d74,uVar1,DAT_140b3d7c);
          FUN_140adea0();
          iVar3 = DAT_140b3d80 + 100;
          iVar2 = DAT_140b3d80;
          do {
            iVar4 = iVar2 + 0x14;
            FUN_140ade54(iVar2);
            iVar2 = iVar4;
          } while (iVar4 != iVar3);
          thunk_FUN_1403dffc();
        }
        else {
          FUN_1402a6e8(4,0x2cd,DAT_140b3c0c,DAT_140b3c08,DAT_140b3c90,0);
          FUN_1403cee4();
          FUN_1402a6e8(4,0x18b,DAT_140b3c0c,DAT_140b3c08,uVar1,DAT_140b3c94);
          FUN_140adea0();
          iVar3 = DAT_140b3c98 + 100;
          iVar2 = DAT_140b3c98;
          do {
            iVar4 = iVar2 + 0x14;
            FUN_140ade54(iVar2);
            iVar2 = iVar4;
          } while (iVar3 != iVar4);
        }
        FUN_140ae07c();
        iVar2 = 0;
      }
    }
    else {
      FUN_1402a6e8(4,0x24d,DAT_140b3d78,DAT_140b3d74,DAT_140b3d90);
      iVar2 = -1;
    }
  }
  FUN_140b4344(0);
  if (*DAT_140b3c04 == local_1c) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

