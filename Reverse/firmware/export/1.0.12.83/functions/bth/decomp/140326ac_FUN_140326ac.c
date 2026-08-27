/* FUN_140326ac @ 0x140326ac */

undefined1 FUN_140326ac(char *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  
  puVar3 = DAT_140326fc;
  if ((((*param_1 == '\x01') && (param_1[1] == -0x56)) && (param_1[2] == -4)) &&
     (param_1[3] == '\x02')) {
    bVar1 = param_1[5];
    bVar2 = param_1[4];
    *DAT_140326f8 = (ushort)bVar1;
    uVar5 = DAT_14032704;
    uVar4 = DAT_14032700;
    *puVar3 = (ushort)bVar2;
    FUN_1402a6e8(4,0x54e,DAT_1403270c,DAT_14032708,uVar5,uVar4,bVar2,bVar1);
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

