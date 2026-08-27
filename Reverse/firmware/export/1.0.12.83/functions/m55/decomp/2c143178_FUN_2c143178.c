/* FUN_2c143178 @ 0x2c143178 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c1432ac) */
/* WARNING: Removing unreachable block (ram,0x2c1432b2) */
/* WARNING: Removing unreachable block (ram,0x2c1432ba) */
/* WARNING: Removing unreachable block (ram,0x2c1432bc) */
/* WARNING: Removing unreachable block (ram,0x2c1432c0) */

code * FUN_2c143178(undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,int *param_5)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  code *local_24;
  
  iVar3 = DAT_2c1433bc;
  bVar2 = (byte)param_2[6];
  puVar6 = (undefined1 *)((int)param_2 + 0x43);
  if (bVar2 < 0x79) {
    if (bVar2 < 99) {
      if (bVar2 == 0) {
        param_2[4] = 0;
        goto LAB_2c1432c8;
      }
      if (bVar2 == 0x58) {
        *(undefined1 *)((int)param_2 + 0x45) = 0x58;
        uVar7 = *param_2;
        uVar9 = *(uint *)*param_5;
        *param_5 = (int)((uint *)*param_5 + 1);
        if ((-1 < (int)(uVar7 << 0x18)) && ((int)(uVar7 << 0x19) < 0)) {
          uVar9 = uVar9 & 0xffff;
        }
        if ((int)(uVar7 << 0x1f) < 0) {
          *param_2 = uVar7 | 0x20;
        }
        if (uVar9 == 0) {
          *param_2 = *param_2 & 0xffffffdf;
        }
        *(undefined1 *)((int)param_2 + 0x43) = 0;
        uVar7 = param_2[1];
        param_2[2] = uVar7;
        if (-1 < (int)uVar7) {
          *param_2 = *param_2 & 0xfffffffb;
        }
        puVar8 = puVar6;
        if ((uVar9 != 0) || (uVar7 != 0)) {
          do {
            puVar8 = puVar8 + -1;
            *puVar8 = *(undefined1 *)(iVar3 + uVar9 % 0x10);
            bVar1 = 0xf < uVar9;
            uVar9 = uVar9 / 0x10;
          } while (bVar1);
        }
        param_2[4] = (int)puVar6 - (int)puVar8;
        puVar6 = puVar8;
        goto LAB_2c1432c8;
      }
    }
    else {
      switch(bVar2) {
      case 99:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 100:
      case 0x69:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x71:
      case 0x72:
      case 0x74:
      case 0x76:
      case 0x77:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x6e:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x6f:
      case 0x75:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x70:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x73:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x78:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  *(byte *)((int)param_2 + 0x42) = bVar2;
  param_2[4] = 1;
  *(undefined1 *)((int)param_2 + 0x43) = 0;
  puVar6 = (undefined1 *)((int)param_2 + 0x42);
LAB_2c1432c8:
  local_24 = param_4;
  iVar3 = FUN_2c143098(param_1,param_2,&local_24,param_3,param_4,param_2,param_3);
  if ((iVar3 == -1) || (iVar3 = (*param_4)(param_1,param_3,puVar6,param_2[4]), iVar3 == -1)) {
LAB_2c1432dc:
    pcVar4 = (code *)0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar3 = 0; iVar3 < (int)(param_2[3] - (int)local_24); iVar3 = iVar3 + 1) {
        iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar5 == -1) goto LAB_2c1432dc;
      }
    }
    pcVar4 = (code *)param_2[3];
    if ((int)param_2[3] < (int)local_24) {
      pcVar4 = local_24;
    }
  }
  return pcVar4;
}

