/* FUN_1011e94c @ 0x1011e94c */

undefined4 FUN_1011e94c(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  short *psVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  psVar4 = DAT_10063434;
  uVar6 = param_3 | param_4 << 0x1f | param_2 << 0xe;
  uVar7 = uVar6 | 0x60000000;
  if (*DAT_10063434 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x10063430);
    (*pcVar1)();
  }
  uVar12 = uVar7;
  if (*(int *)(DAT_10063434 + 8) == 0) {
    uVar5 = FUN_10112e84(DAT_10063438);
    *(undefined4 *)(psVar4 + 8) = uVar5;
  }
  iVar10 = *(int *)(psVar4 + 8);
  if (iVar10 == 0) {
    FUN_100a5b78((DAT_10063440 - DAT_1006343c) * 0x20 & 0xff00U | 0x960012,DAT_1006344c,DAT_10063444
                 ,DAT_10063448,0);
    return 0;
  }
  uVar11 = (uVar6 & 0x7fffffff | 0x60000000) >> 0x1d;
  cVar2 = (char)psVar4[3];
  *(uint *)(psVar4 + 6) = uVar7;
  if (uVar11 == 2) {
    if (cVar2 == '\0') {
      return 0;
    }
    uVar5 = FUN_10063330(*(undefined1 *)((int)psVar4 + 5));
    (**(code **)(*(int *)(iVar10 + 8) + 4))(iVar10,uVar5,0);
    return 0;
  }
  if (uVar11 == 3) {
    if (cVar2 == '\0') {
      return 0;
    }
    uVar5 = FUN_10063330(*(undefined1 *)((int)psVar4 + 5));
    uVar7 = uVar6 >> 0x1f;
    uVar9 = psVar4[6] & 0x3fff;
    uVar6 = (uVar6 & 0x1fffffff) >> 0xe;
    goto LAB_100633ca;
  }
  cVar8 = *(char *)((int)psVar4 + 7);
  uVar3 = *(undefined1 *)((int)psVar4 + 5);
  if (uVar11 == 1) {
    if (cVar2 == '\0') goto LAB_100633d8;
    uVar5 = FUN_10063330(uVar3);
    if (cVar8 != '\0') goto LAB_100633f0;
LAB_100633c4:
    uVar9 = 0;
  }
  else {
    if (cVar2 == '\0') {
      cVar8 = cVar8 == '\0';
LAB_100633d8:
      FUN_1006323c(iVar10,uVar3,cVar8,cVar2,param_1,uVar12);
      return 0;
    }
    uVar5 = FUN_10063330(uVar3);
    if (cVar8 != '\0') goto LAB_100633c4;
LAB_100633f0:
    uVar9 = 0x1fe0;
  }
  uVar7 = 1;
  uVar6 = 0x1fe0;
LAB_100633ca:
  FUN_1011c588(iVar10,uVar5,uVar6,uVar9,uVar7);
  return 0;
}

