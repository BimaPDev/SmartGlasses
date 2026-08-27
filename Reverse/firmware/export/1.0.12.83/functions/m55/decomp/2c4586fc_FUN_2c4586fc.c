/* FUN_2c4586fc @ 0x2c4586fc */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4586fc(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  uint uVar5;
  undefined4 in_cr13;
  undefined8 extraout_d5;
  undefined8 unaff_d10;
  undefined8 uVar6;
  int iStack00000084;
  
  iStack00000084 = *(int *)(param_3 + 0xb1);
  if (param_3 == -0x5d) {
    uVar5 = (uint)_MasterStackPointer;
    coprocessor_load(8,in_cr13,unaff_r4 + 0x2d4);
    uVar3 = *(undefined1 *)(unaff_r5 + uVar5);
    *(int *)(param_4 + 0x24) = iStack00000084;
    *(undefined1 *)((int)param_1 + 5) = uVar3;
    uVar2 = *(undefined2 *)(uVar5 + iStack00000084);
    *(short *)(unaff_r4 + 0x302) = (short)(unaff_r4 + 0x2d4);
    uVar4 = *param_1;
    uVar5 = param_1[2];
    *(undefined4 *)(iStack00000084 + 0x44) = param_1[1];
    *(char *)(iStack00000084 + 0x18) = (char)uVar2;
    uVar6 = func_0x2d38a670(uVar5 >> 0x17,iStack00000084 + 3,uVar2,uVar4,param_2,param_4);
    FloatVectorSub(extraout_d5,unaff_d10,2,0x20);
    (*(code *)0x2c45873c)((int)uVar6 + -0xf6,(int)((ulonglong)uVar6 >> 0x20),_LAB_2c4588b4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xc4,0x2c45873a);
    (*pcVar1)();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

