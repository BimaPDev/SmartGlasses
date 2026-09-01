/* FUN_1008049c @ 0x1008049c */

undefined1 FUN_1008049c(int *param_1,uint param_2)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  ushort uVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 uVar11;
  
  puVar2 = DAT_10080564;
  if (param_2 < 4) {
    if (DAT_10080564[param_2 + 10] == '\0') {
      uVar3 = 0;
    }
    else {
      iVar10 = param_1[3];
      uVar11 = FUN_10122008(param_1,*DAT_10080564,param_2);
      iVar4 = iVar10 + ((int)uVar11 + 0x18) * 4;
      uVar1 = *(undefined2 *)(iVar4 + 4);
      puVar7 = (undefined4 *)(iVar10 + 0xc6);
      uVar5 = *(ushort *)(iVar4 + 6) & 0xfff;
      FUN_10121e98(param_1,(int)((ulonglong)uVar11 >> 0x20),uVar1,uVar5,0xf,puVar7,0);
      FUN_1011ea40(puVar2 + param_2 * 0x848 + 0x2016,puVar7,0x7fe);
      FUN_10121e98(param_1,*puVar2,uVar1,uVar5 + 1,0xf,puVar7,0);
      puVar9 = (undefined4 *)(puVar2 + param_2 * 0x848 + 0x2816);
      do {
        puVar8 = puVar7 + 1;
        *puVar9 = *puVar7;
        puVar7 = puVar8;
        puVar9 = puVar9 + 1;
      } while (puVar8 != (undefined4 *)(iVar10 + 0x106));
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
    if (*(char *)(*param_1 + 0x10) != '\0') {
      pcVar6 = *(code **)(*param_1 + 0xc);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(DAT_10080560,DAT_1008055c,0x698,param_2);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

