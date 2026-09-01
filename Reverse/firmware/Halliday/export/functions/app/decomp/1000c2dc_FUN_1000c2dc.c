/* FUN_1000c2dc @ 0x1000c2dc */

void FUN_1000c2dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short *psVar1;
  byte *pbVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  
  pbVar2 = DAT_1000c3d0;
  psVar1 = DAT_1000c3cc;
  uVar7 = *DAT_1000c3c8;
  *DAT_1000c3cc = 0;
  *pbVar2 = 0;
  FUN_100a1ce0(psVar1,pbVar2,param_3,0,param_1,param_2,param_3,uVar7);
  FUN_100a1d94();
  FUN_1012d214();
  FUN_100a5774();
  FUN_1000c65c();
  FUN_1012d838();
  FUN_1000de78();
  FUN_1001b2b8();
  FUN_1000ca60();
  FUN_1000ca90();
  FUN_1000cac0();
  iVar4 = FUN_10012584();
  if ((iVar4 == 0) && (iVar4 = FUN_1012d99a(), 10 < iVar4)) {
    FUN_100a2c44(DAT_1000c3d4,0x10,0xffffffff,0xffffffff,0);
    FUN_100a9130(4,4,0);
  }
  FUN_1000c480();
  FUN_100a2b5c();
  FUN_100a2da4(0);
  FUN_100a2bb8(1);
  FUN_100a2b00();
  iVar4 = FUN_100a5114();
  if ((*psVar1 == 4) && (*pbVar2 == 7)) {
    *DAT_1000c3d8 = 1;
  }
  else if (iVar4 == 0) goto LAB_1000c386;
  FUN_100a2b5c();
LAB_1000c386:
  FUN_1012d812();
  FUN_10012210();
  pcVar3 = DAT_1000c3dc;
  if (*pbVar2 - 0xd < 2) {
    if (*pbVar2 == 0xe) {
      cVar5 = '\x02';
    }
    else {
      cVar5 = '\x01';
    }
    *DAT_1000c3dc = cVar5;
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (*pcVar3 == '\0') {
    if (bVar6) {
      FUN_100bab48();
    }
  }
  else {
    FUN_100c03b0();
  }
  do {
    FUN_1000bfd0(0,0);
  } while( true );
}

