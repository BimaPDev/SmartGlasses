/* FUN_2c2c4086 @ 0x2c2c4086 */

void FUN_2c2c4086(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 *unaff_r7;
  undefined4 unaff_r11;
  longlong lVar6;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr15;
  undefined4 uStack00000018;
  
  puVar1 = (undefined1 *)0x3f8;
  puVar2 = (undefined1 *)0x400;
  puVar3 = (undefined1 *)0x408;
  puVar4 = (undefined1 *)0x410;
  lVar6 = 8;
  while( true ) {
    *unaff_r7 = *puVar1;
    unaff_r7[1] = *puVar2;
    unaff_r7[2] = *puVar3;
    unaff_r7[3] = *puVar4;
    unaff_r7 = unaff_r7 + 4;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  coprocessor_function(0xe,0,7,in_cr15,in_cr1,in_cr15);
  coprocessor_store(0,in_cr0,unaff_r11);
                    /* WARNING: Does not return */
  pcVar5 = (code *)software_udf(6,0x2c2c40a2);
  uStack00000018 = param_2;
  (*pcVar5)();
}

