/* FUN_1011e93a @ 0x1011e93a */

/* WARNING: Removing unreachable block (ram,0x10063412) */
/* WARNING: Removing unreachable block (ram,0x10063416) */
/* WARNING: Removing unreachable block (ram,0x100633e0) */
/* WARNING: Removing unreachable block (ram,0x100633f6) */
/* WARNING: Removing unreachable block (ram,0x100633e2) */
/* WARNING: Removing unreachable block (ram,0x100633fa) */
/* WARNING: Removing unreachable block (ram,0x100633fe) */

undefined4 FUN_1011e93a(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  short *psVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  psVar4 = DAT_10063434;
  uVar7 = 0;
  if (*DAT_10063434 != 0) {
    if (*(int *)(DAT_10063434 + 8) == 0) {
      uVar5 = FUN_10112e84(DAT_10063438);
      *(undefined4 *)(psVar4 + 8) = uVar5;
    }
    iVar6 = *(int *)(psVar4 + 8);
    if (iVar6 == 0) {
      FUN_100a5b78((DAT_10063440 - DAT_1006343c) * 0x20 & 0xff00U | 0x960012,DAT_1006344c,
                   DAT_10063444,DAT_10063448,0);
    }
    else {
      sVar3 = psVar4[3];
      psVar4[6] = 0;
      psVar4[7] = 0;
      cVar2 = *(char *)((int)psVar4 + 7);
      if ((char)sVar3 == '\0') {
        FUN_1006323c(iVar6,*(undefined1 *)((int)psVar4 + 5),cVar2 == '\0',0,param_1,uVar7);
      }
      else {
        uVar7 = FUN_10063330(*(undefined1 *)((int)psVar4 + 5));
        if (cVar2 == '\0') {
          uVar5 = 0x1fe0;
        }
        else {
          uVar5 = 0;
        }
        FUN_1011c588(iVar6,uVar7,0x1fe0,uVar5,1);
      }
    }
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x10063430);
  (*pcVar1)();
}

