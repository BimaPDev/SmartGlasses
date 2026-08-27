/* FUN_14072014 @ 0x14072014 */

void FUN_14072014(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  undefined4 *extraout_r1_01;
  uint uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  byte local_3c [15];
  char local_2d;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  
  uVar10 = (uint)*(byte *)(param_1 + 0x33);
  local_1c = *DAT_14072184;
  if (uVar10 < *(byte *)(param_1 + 0x32)) {
    FUN_14072878(param_1 + 0x20,param_2,
                 *(int *)(param_1 + 0x18) + (uint)*(ushort *)(param_1 + 0x30) + uVar10 * -0x10,0x10)
    ;
    FUN_14072688(param_1,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20);
    uVar2 = 0;
    *(char *)(param_1 + 0x33) = *(char *)(param_1 + 0x33) + '\x01';
    param_2 = extraout_r1_01;
  }
  else if (uVar10 < 0xfe) {
    *(undefined1 *)(param_1 + 0x33) = 0xfe;
    uVar9 = param_2[1];
    uVar7 = param_2[2];
    uVar2 = param_2[3];
    *(undefined4 *)(param_1 + 0x20) = *param_2;
    *(undefined4 *)(param_1 + 0x24) = uVar9;
    *(undefined4 *)(param_1 + 0x28) = uVar7;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    FUN_14072688(param_1,*(undefined4 *)(param_1 + 0x1c),DAT_14072188);
    uVar2 = 0;
    param_2 = extraout_r1_00;
  }
  else if (uVar10 == 0xff) {
    uVar2 = 1;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x33) = 0xff;
    cVar5 = *(char *)((int)param_2 + 0xf);
    uVar10 = uVar1 & 0xf;
    FUN_140728b0(param_2,local_3c);
    if (cVar5 < '\0') {
      local_3c[0] = local_3c[0] ^ 0x87;
    }
    if (((uVar1 & 0xf) != 0) || (*(char *)(param_1 + 0x32) == '\0')) {
      FUN_140728b0(local_3c);
      if (local_2d < '\0') {
        local_3c[0] = local_3c[0] ^ 0x87;
      }
      uVar4 = 0;
      cVar5 = '\x01';
      puVar3 = (undefined1 *)((int)&uStack_20 + 3);
      do {
        if ((uVar4 & 0xff) < uVar10) {
          *(undefined1 *)((int)&local_1c + (uVar4 - uVar10)) =
               *(undefined1 *)(*(int *)(param_1 + 0x18) + uVar4);
        }
        else {
          if (uVar10 == (uVar4 & 0xff)) {
            *(undefined1 *)((int)&uStack_20 + (3 - uVar10)) = 0x80;
          }
          else {
            *puVar3 = 0;
          }
          if (cVar5 == '\x10') goto LAB_14072078;
        }
        cVar5 = cVar5 + '\x01';
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + -1;
      } while( true );
    }
    puVar6 = *(undefined4 **)(param_1 + 0x18);
    local_2c = *puVar6;
    uStack_28 = puVar6[1];
    uStack_24 = puVar6[2];
    uStack_20 = puVar6[3];
LAB_14072078:
    iVar8 = param_1 + 0x20;
    FUN_14072878(&local_2c,&local_2c,local_3c,0x10);
    FUN_14072878(iVar8,&local_2c,iVar8,0x10);
    FUN_14072688(param_1,*(undefined4 *)(param_1 + 0x1c),iVar8);
    uVar2 = 0;
    param_2 = extraout_r1;
  }
  if ((*DAT_14072184 ^ local_1c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc(uVar2,param_2,*DAT_14072184 ^ local_1c,0);
  }
  return;
}

