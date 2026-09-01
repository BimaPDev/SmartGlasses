/* FUN_100113e4 @ 0x100113e4 */

void FUN_100113e4(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  
  iVar1 = DAT_10011458;
  iVar4 = *DAT_10011454;
  iVar6 = *(int *)(DAT_10011458 + 0x20);
  pcVar5 = *(code **)(*(int *)(iVar6 + 8) + 0x2c);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(iVar6);
  }
  FUN_100112a8(iVar6);
  FUN_1006ce2c(iVar6,0);
  FUN_1006d0f8(iVar6);
  FUN_1013cec4(DAT_1001145c);
  FUN_1012d1f4(*(undefined4 *)(iVar1 + 0xb0));
  FUN_1012d1f4(*(undefined4 *)(iVar1 + 0xb4));
  *(byte *)(iVar1 + 0x8d) = *(byte *)(iVar1 + 0x8d) & 0xfb;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  *(undefined4 *)(iVar1 + 0xb4) = 0;
  if (*DAT_10011454 != iVar4) {
    FUN_1013cdc0();
  }
  iVar1 = FUN_10059e10();
  puVar2 = *(undefined4 **)(iVar1 + 4);
  puVar3 = *(undefined4 **)puVar2[1];
                    /* WARNING: Could not recover jumptable at 0x1011b4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)(puVar2,*puVar3,puVar3[1],puVar3[2]);
  return;
}

