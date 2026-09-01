/* FUN_1011e942 @ 0x1011e942 */

/* WARNING: Removing unreachable block (ram,0x100633e0) */
/* WARNING: Removing unreachable block (ram,0x100633f6) */
/* WARNING: Removing unreachable block (ram,0x100633e2) */
/* WARNING: Removing unreachable block (ram,0x100633a8) */
/* WARNING: Removing unreachable block (ram,0x100633ac) */
/* WARNING: Removing unreachable block (ram,0x100633b4) */
/* WARNING: Removing unreachable block (ram,0x100633d2) */
/* WARNING: Removing unreachable block (ram,0x100633d8) */
/* WARNING: Removing unreachable block (ram,0x100633b6) */
/* WARNING: Removing unreachable block (ram,0x100633c4) */
/* WARNING: Removing unreachable block (ram,0x100633f0) */
/* WARNING: Removing unreachable block (ram,0x100633c6) */
/* WARNING: Removing unreachable block (ram,0x10063412) */
/* WARNING: Removing unreachable block (ram,0x10063416) */
/* WARNING: Removing unreachable block (ram,0x100633ca) */

undefined4 FUN_1011e942(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  psVar2 = DAT_10063434;
  uVar6 = 0x40000000;
  if (*DAT_10063434 != 0) {
    if (*(int *)(DAT_10063434 + 8) == 0) {
      uVar3 = FUN_10112e84(DAT_10063438);
      *(undefined4 *)(psVar2 + 8) = uVar3;
    }
    iVar5 = *(int *)(psVar2 + 8);
    if (iVar5 == 0) {
      FUN_100a5b78((DAT_10063440 - DAT_1006343c) * 0x20 & 0xff00U | 0x960012,DAT_1006344c,
                   DAT_10063444,DAT_10063448,0,uVar6);
    }
    else {
      sVar1 = psVar2[3];
      psVar2[6] = 0;
      psVar2[7] = 0x4000;
      if ((char)sVar1 != '\0') {
        uVar6 = FUN_10063330(*(undefined1 *)((int)psVar2 + 5));
        pcVar4 = *(code **)(*(int *)(iVar5 + 8) + 4);
        (*pcVar4)(iVar5,uVar6,param_2,pcVar4,param_1);
      }
    }
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)software_udf(0xff,0x10063430);
  (*pcVar4)();
}

